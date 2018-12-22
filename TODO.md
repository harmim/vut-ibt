# TODO list

- [x] Zjistit, jak se v Inferu dají odlišit volání knihovních a neknihovních
  funkcí.
  - Lze to zjistit tak, že se spočítá summary volané funkce. Pokud volaná funkce
    summary nemá, tak to znamená, že se jedná o volání knihovní funkce. Summary
    se totiž počítají pouze pro uživatelsky definované funkce programu.

- [x] Volání lock a unlock v C a v Java, zjistit, jak to celé funguje.
  - V `ConcurrencyModeles` modulu je funkce `get_lock`, která zjistí, jestli
    je daná funkce zámek `Lock`, případně jestli zámek ruší `Unlock`. Bohužel
    nefunguje pro C, pouze pro Java a C++ a možná Ojbective-C.
    - Zkoušel jsem to Java s funkcemi `synchronized` a nefungovalo mi to.
  - Detekci, jestli se jedná o zamykací funkci můžu v C udělat přímým porovnáním
    názvu funkce, např. porovnáním na název `pthread_mutex_lock`.

- [x] Výpis volání funkcí v rámci dané funkce.

- [x] Projít si článek *Verifying Concurrent Programs Using Contracts*.

- [x] Podívat se s Vladem na jeho experimentální checker.
  - Na schůzce s Vladem jsme to celé prošli. Už jsem pochpil jak to celé funguje
    a zároveň jsem se naučil a objasnil si některé věci v OCaml.
  - Usoudili jsme, že nemá smysl tento checker zprovozňovat, protože se tam
    používají některé konstrukce, které v aktální verzi Inferu nejsou a zabralo
    by to hodně času, kdybychom to chtěli zprovoznit.

- [ ] Možnost definovat sledované funkce?

- [ ] Projít si článek *A True Positives Theorem for a Static Race Detector*.

- [ ] Srovnat kontrakty generované Gluonem a mým nástrojem.

- [ ] Možná si ukládat výskyty atomických sekvencí pouze, pokud se tyto
  sekvence objeví dvakrát a více. Nutno experimentálně vyzkoušet.

- [ ] Rozšířit detekci atomických sekvencí i na jiné typy C/C++ zámků
  pro synchronizaci procesů/vláken (semafory), případně na zámky v Java
  (`synchronized`)?

- [ ] Kontrolovat, jestli se lock/unlock volá nad stejným zámkem/objektem?

- [ ] Kontrolovat, nad jakými objekty se volají atomické funkce?

- [ ] Vymyslet název mého nástroje.

- [ ] Změnit název souboru `Atomicity.ml/Atomicity.mli/Domain` na něco jako
  `AtomicityDetector` a vytvořit nějaký soubor `AtomicityAnalysis`, který
  se bude spouštět po detekční fázi.

- [ ] Zkusit detekční fázi spustit na nějakých existujících programech.
