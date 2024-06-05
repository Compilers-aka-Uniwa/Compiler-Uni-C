all:
	bison -d simple-bison-code.y --verbose
	flex simple-flex-code.l
	gcc simple-bison-code.tab.c lex.yy.c -o compiler-Uni-C
	./compiler-Uni-C input-func.txt output.txt
clean:
	rm simple-bison-code.c simple-bison-code.tab.h lex.yy.c compiler-Uni-C
