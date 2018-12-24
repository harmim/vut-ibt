# harmim/infer
Moje implementace se nachází v repositáři
[harmim/infer](https://github.com/harmim/infer). Jedná se o
fork repositáře [facebook/infer](https://github.com/facebook/infer). Mnou
editované/přidané soubory se nachází ve větvi
[atomicity](https://github.com/harmim/infer/tree/atomicity), viz
[diff](https://github.com/facebook/infer/compare/master...harmim:atomicity).

Analýza je testována pouze pro jazyk C. Pro jazyk C++ by to taky mělo fungovat,
ale nebylo to testováno. Pro jazyk Java se analýza nespustí. Pro jazyk
Objective-C je chování nedefinované.

Analyzátor podporuje pouze `POSIX Threads` (`Pthreads`) zámky, tj. funkce
`pthread_mutex_lock` a `pthread_mutex_unlock`.

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
Víc viz https://github.com/facebook/infer/blob/master/INSTALL.md.

# Překlad zdrojových souborů
```bash
cd infer/infer/src

# přeloží všechno
make -j BUILD_MODE=default

# nepřekldádá modely, ty je nejdříve nutné přeložit přechozím příkazem
make -j byte
```
Více viz https://github.com/facebook/infer/blob/master/CONTRIBUTING.md#building-infer-for-development.

# Spouštění analýzy
Viz https://fbinfer.com/docs/hello-world.html a
https://fbinfer.com/docs/analyzing-apps-or-projects.html. Analýza je implicitně
vypnutá. Její spuštění společně s ostatními implicitními analýzami nástroje
Facebook Infer lze provést parametrem `--atomicity`, případně parametrem
`--atomicity-only` pro samostané spuštění analýzy porušení atomičnosti.

Př.:
```bash
infer run --atomicity-only -- gcc -c sourc_file.c
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
    `(`, `)` možno vynechat. Tyto atomické sekvence všech funkcí by se
    měly na konci analýzy slučovat. Zapisovat to do
    souboru.
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
    1. **Na konci funkce odemknout vše (tj. přidat unlock na konec každé
       funkce, pokud je to třeba). Potom pro `f()` dostaneme (`a`). Všechny
       volání unlock, kterým nepředchází volání lock ignorovat.**
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

### Detekční fáze
Příklad pro vysvětlení níže uvedených typů a funkcí:
`f1` (`f1` `f2`) `f1` (`f1` `f3`).

#### Abstraktní stav
Množina `t` typu `TSet`, kde prvky této množiny jsou záznamy `tElement`:
`{firstOccurrences : string list; callSequence : string list;
finalCalls : string list; isInLock : bool}`. Prvky množiny typu `TSet` jsou
ekvivalentní, pokud jsou ekvivalentní položky `firstOccurrences`,
`callSequence` a `finalCalls` jejich záznamů, jinak jejich
pořadí v množině určuje součet délek těchto položek.
- `firstOccurrences`: Zanořené první výskyty volání.
  Př.: Nejdříve `f1`, potom `f1` `f2`, atd.
- `callSequence`: Sekvence volání od předchozího unlocku k aktuálnímu
  unlocku. Př.: Nejdříve `f1` (`f1` `f2`), potom `f1` (`f1` `f3`).
- `finalCalls`: Výsledná sekvence volání. Bude to přibývat po `callSequence`.
  Nakonec to bude `f1` (`f1` `f2`) `f1` (`f1` `f3`).
- `isInLock`: Indikuje, zda se nacházíme v atomické sekci, tj. mezi
  lock a unlock.

Počáteční abstraktní stav každé funkce je jedno-prvková množina, kde jsou
všechny položky jejího prvku prázdné.

#### Summary
Záznam `summary`:
`{atomicitySequences : (string list) list; allOccurrences : string list}`.
- `atomicitySequences`: Seznam atomických sekvencí.
  Př.: (`f1` `f2`) (`f1` `f3`).
- `allOccurrences`: Seznam výskytů všech funkcí. Př `f1` `f2` `f3`.


#### Operátory
- `( <= ) : lhs rhs`
  - Levý operand (`lhs`) je menší nebo roven (`<=`) pravému operandu (`rhs`),
    pokud je `lhs` podmnožinou `rhs`.
- `join : astate1 astate2`
  - Sjednocení (množinová inkluze) abstraktních stavů `astate1` a `astate2`.
- `widen : prev next`
  - Spojení předchozího stavu (`prev`) a následujícího stavu (`next`), tj.
    `join prev next`.

#### Klíčové funkce
- `update_astate_on_lock`
  - Aktualizace abstraktního stavu po detekci volání lock. Neuvažuji
    vnořené zámky, taže pokud již jsme v atomické sekci, tak toto volání
    ignoruji. V opačném případě přidám `firstOccurrences` a symbol `(` do
    `callSequence` a nastavím `isInLock` na hodnotu `true`.
- `update_astate_on_unlock`
  - Aktualizace abstraktního stavu po detekci volání unlock. Neuvažuji vnořené
    zámky, takže pokud nejsme v atomické sekvenci, tak toto volání ignoruji.
    V opačném případě přidám do `callSequence` seznam `firstOccurrences` a
    symbol `)` a do `finalCalls` přidám `callSequence`, pokud již tuto
    sekvenci neobsahuje a nastavím `isInLock` na hodnotu `false`.
- `update_astate_on_function_call`
  - Aktualizace abstraktního stavu po detekci volání libovolné funkce kromě
    lock a unlock. Do `firstOccurrences` se přidá název volané funkce, pokud
    tento seznam již tuto funkci neobsahuje.
- `update_astate_on_function_call_with_summary`
  - Aktualizace abstraktního stavu po zavolání neknihovní funce, pro níž
    existuje `summary`. Do `firstOccurrences` se přidají všechny funkce
    uložené v `allOccurrences` v `summary` volané funkce, pokud se tam tyto
    funkce již nevyskytují.
- `update_astate_at_the_end_of_function`
  - Aktualizace abstraktního stavu na konci analyzované funkce. Pokud je
    seznam `callSequence` prázdný, tak se do `finalCalls` přidá seznam
    `firstOccurrences`. V opačném případě je chování funkce shodné s funkcí
    `update_astate_on_unlock`.
- `convert_astate_to_summary`
  - Převod abstraktního stavu na `summary` na konci analýzy funkce. Do
    `atomicitySequences` se uloží všechny atomické sekvence z `finalCalls`.
    Do `allOccurrences` se uloží výskyty všech funkcí z `finalCalls`.
