PROG := prog

$(PROG).native: $(PROG).ml clean
	ocamlbuild $@

.PHONY: clean
clean:
	rm -rf _build $(PROG).native
