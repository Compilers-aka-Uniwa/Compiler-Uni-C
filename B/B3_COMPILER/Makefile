compile:
	bison -d simple-bison-code.y 
	flex simple-flex-code.l
	gcc -o compiler-Uni-C simple-bison-code.tab.c lex.yy.c -lfl
	./compiler-Uni-C input.txt output.txt 
clean:
	rm simple-bison-code.tab.c simple-bison-code.tab.h lex.yy.c compiler-Uni-C
