all:
	bison -d simple-bison-code.y --verbose
	flex simple-flex-code.l
	gcc -o compiler-Uni-C simple-bison-code.tab.c lex.yy.c 
	./compiler-Uni-C input-test.txt output.txt
clean:
	rm simple-bison-code.c simple-bison-code.tab.h lex.yy.c compiler-Uni-C
