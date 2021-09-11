compile: flex 
	cc -Wall -Wextra -Wpedantic ./src/lex.yy.c ./src/sintax.tab.c -o tradutor -g 

flex: bison
	flex ./src/lexico.l 
	mv lex.yy.c ./src/

bison: 
	bison ./src/sintax.y -d  -Wcounterexample -t
	mv sintax.tab.c ./src/
	mv sintax.tab.h ./src/


clean:
	rm ./src/lex.yy.c
	rm ./src/sintax.tab.c
	rm ./src/sintax.tab.h
	rm ./tradutor