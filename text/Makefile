# makefile for compilation of the thesis
# (c) 2008 Michal Bidlo
# E-mail: bidlom AT fit vutbr cz
# Edited by: dytrych AT fit vutbr cz
# Edited by: xharmi00 AT stud.fit.vutbr.cz
#===========================================

CO := xharmi00

.PHONY: pdf
pdf: $(CO).pdf
$(CO).pdf: clean $(CO).tex
	pdflatex $(CO)
	bibtex $(CO)
	pdflatex $(CO)
	pdflatex $(CO)

.PHONY: clean
clean:
	rm -f $(CO).dvi $(CO).log $(CO).blg $(CO).bbl $(CO).toc $(CO).aux \
		$(CO).out $(CO).lof $(CO).ptc $(CO).fdb_latexmk $(CO).fls \
		$(CO).synctex.gz
	rm -f $(CO).tar.gz

.PHONY: pack
pack: $(CO).tar.gz
$(CO).tar.gz: $(CO).pdf
	COPYFILE_DISABLE=1 tar -czvf $@ ./figures/* ./template-fig/* desky.pdf \
		*.bst *.cls Makefile *.tex *.bib $^ zadani.pdf

.PHONY: vlna
vlna:
	vlna -l $(CO)*.tex $(CO)*.bib

.PHONY: normostrany
normostrany:
	echo "scale=2; `detex -n $(CO)-chapters.tex | wc -c`/1800;" | bc
