# harmim/infer

Moje implementace se nachází v repositáři
[harmim/infer](https://github.com/harmim/infer/tree/atomicity). Jedná se o
fork repositáře [facebook/infer](https://github.com/facebook/infer). Mnou
editované/přidané soubory se nachází ve větvi
[atomicity](https://github.com/harmim/infer/tree/atomicity), viz
[diff](https://github.com/facebook/infer/compare/master...harmim:atomicity).

# Instalace
```bash
cd infer

### varianta A ###
./build-infer.sh
##################

### varianta B ###
./autogen.sh
./configure
make
##################

sudo make install
```

# Překlad zdrojových souborů
```bash
cd infer/infer/src
# přeloží všechno
make -j BUILD_MODE=default
# nepřekldádá modely, ty je nejdříve nutné přeložit přechozím příkazem
make -j byte
```

### Editované soubory
- `infer/.gitignore`
- `infer/infer/models/objc/src/Makefile`
- `infer/infer/models/objcpp/src/Makefile`
- `infer/infer/src/backend/Payloads.ml`
- `infer/infer/src/backend/Payloads.mli`
- `infer/infer/src/base/Config.ml`
- `infer/infer/src/base/Config.mli`
- `infer/infer/src/checkers/Atomicity.ml`
- `infer/infer/src/checkers/AtomicityDomain.ml`
- `infer/infer/src/checkers/registerCheckers.ml`

# Spouštění analýzy
```bash
infer run --atomicity -- gcc -c sourc_file.c
```

# Poznámky k návrhu a implementaci
- Při běhu funkce `g()`:
  - Sledovat první výskyty bez locku.
  - Objeví-li se lock, zanořené detekování prvních výskytů.
  - Zanořené locky neuvažovat.
  - První unlock způsobí kontrolu redundance od předchozího unlocku
    k současnému unlocku (aby se to nezacyklilo, zkontroluje se,
    jestli daná sekvence už v řetězci není).
  - `f1` ~~`f1`~~ (`f1` ~~`f1`~~ `f2`) | `f1` ~~`f1`~~ (`f1` `f3`)
    | ~~`f1` (`f1` `f3` `f3`)~~

- Na konci funkce vyderivovat dvě množiny:
  1. Množina atomických sekvencí - pro výše uvedené {(`f1` `f2`), (`f1` `f3`)},
    `(`, `)` možno vynechat. Tyto atomické sekvence všech funkcí by se asi
    měly na konci analýzy slučovat. Zapisovat to do
    souboru?
  2. Množina sekvencí volání, které získáme vytažením závorek a
    "zkompaktněním" - tedy {`f1` `f2` `f3`}. Tuto množinu pak budeme "vlepovat"
    ve vyšších úrovních. (Vezmou se výskyty všech funkcí.)

- O úroveň výše:
  - Předpokládejme, že `g()` je zanořeno v `h()`.
  - Analýza `h()` může vypadat takto:
    `f1` `g` ~~`f1`~~ `f2` `f3` (`g` `f1` `f2` `f3`).

- V detekční fázi:

  Vzít sekvence atomických volání z přechozí fáze a detekovat porušení
  atomicity pro libovolnou dvojici volání, která se vyskytla za sebou v
  jedné z atomických sekvencí.
  - Např. pokud je výsledek 1. fáze {(`a` `b` `c`), (`a` `c` `d`)},
    budeme sledovat neatomicity pro `a` `b`, `b` `c`, `a` `c`, `c` `d`.

- Jak řešit `join`, `widen`, `<=` ve fázi sběru volání funkcí?
  - U `widen` vzít pouze `next` abstraktní stav.
  - U `join` je potřeba sloučit větve programu tak, že se udělá sjednocení
    abstraktních stavů (bude potřeba pracovat s množinami).
  - U `<=` je potřeba porovnat, jestli je jeden abstraktní stav větší nebo
    roven druhému.

- V případech, že volání lock/unlock není v páru v rámci jedné funkce:

  Př:
    ```c
    f()
    {
        lock();
        a();
    }

    g()
    {
        b();
        unlock();
    }

    main()
    {
        f();
        g();
    }
    ```
  - Dvě možnosti řešení:
    1. Na konci funkce odemknout vše (tj. přidat unlock na konec každé
       funkce, pokud je to třeba). Potom pro `f()` dostaneme (`a`). Všechny
       volání unlock, kterým nepředchází volání lock ignorovat.
    2. Přidat další dvě položky do summaries - volání s chybějícím unlock
       a volání s chybějícím lock.
       - Pro výše uvedené bychom dostali:
         - Pro `f()`: (`a`.
         - Pro `g()`: `b`).
       - Výše uvedené sekvence by měly být "přilepené" k sekvencím
         vytvořeným ve volajících (nadřazených) funkcích.
       - Volání `a`, `b` se objeví v druhém vráceném řetězci se všemi
         volanými funkcemi.
       - Příklad:
         ```c
         f()
         {
             lcok();
             a4();
             unlock();
             a5();
             lock();
             a6();
         }

         g()
         {
             a7();
             unlock();
             a8();
         }

         main()
         {
             a1();
             f();
             a2();
             g();
             a3();
         }
         ```
         - Pro `f()` bychom měli dostat:
           - Atomické volání: {(`a4`)}.
           - Všechna volání: {`a4` `a5` `a6`}.
           - Bez unlock: {(`a6`}.
           - Bez lock: {}.
         - Pro `g()` bychom měli dostat:
           - Atomické volání: {}.
           - Všechna volání: {`a7` `a8`}.
           - Bez unlock: {}.
           - Bez lock: {`a7`)}.
         - Na úrovni `main()` bychom měli dostat:
           - Před voláním `f()`: `a1`.
           - Po volání `f()`: `a1` `a4` `a5` `a6` (`a6`.
           - Před voláním `g()`: `a1` `a4` `a5` `a6` (`a6` `a2`.
           - Po volání `g()`:
             `a1` `a4` `a5` **`a6`** (**`a6`** `a2` **`a7`**) **`a7`** `a8`.
         - Zdvojené volnání `a6` `a6` / `a7` `a7` je možno ignorovat.

### Abstraktní stav
`{firstOccurrences : string list; callSequence : string list;
finalCalls : string list}`
- `firstOccurrences`: Zanořené první výskyty volání.
- `callSequence`: Sekvence volání od předchozího unlocku k aktuálnímu
  unlocku.
- `finalCalls`: Výsledná sekvence volání.

Př.: `f1` (`f1` `f2`) `f1` (`f1` `f3`). Při této sekvenci volání budou výše
uvedené položky abstraktního stavu vypadat následovně:
- `firstOccurrences`: Tady budou vždy jednotlivé zanořené první výskyty.
  Nejdříve `f1`, potom `f1` `f2`, atd.
- `callSequence`: Tady budou vždy celé sekvence od posledního unlocku k
  aktuálnímu unlocku. Nejdříve `f1` (`f1` `f2`), potom `f1` (`f1` `f3`).
- `finalCalls`: Tady se bude postupně skládat celá výsledná sekvence
  volání. Bude to přibývat po `callSequence`. Nakonec to bude
  `f1` (`f1` `f2`) `f1` (`f1` `f3`).

### Summary

`{atomicitySequences : (string list) list}`
- `atomicitySequences`: Množina atomických sekvencí.
  Př.: (`f1` `f2`) (`f1` `f3`).
