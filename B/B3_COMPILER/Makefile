all:
	bison -d simple-bison-code.y --verbose
	flex simple-flex-code.l
	gcc -o compiler-Uni-C simple-bison-code.tab.c lex.yy.c 
	./compiler-Uni-C input-final.txt output.txt
clean:
	rm simple-bison-code.tab.c simple-bison-code.tab.h lex.yy.c compiler-Uni-C
