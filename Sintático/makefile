compile: flex
	cc -Wall -Wextra -Wpedantic ./src/lex.yy.c ./src/sintax.tab.c -o tradutor -g ./src/tabela.o ./src/arvore.o

flex: bison
	flex ./src/lexico.l 
	mv lex.yy.c ./src/

bison: symbol_table syntatic_tree
	bison ./src/sintax.y -d  -Wcounterexample -t
	mv sintax.tab.c ./src/
	mv sintax.tab.h ./src/

symbol_table:
	cc -Wall -Wextra -Wpedantic ./src/tabela.c -c -g
	mv tabela.o ./src/

syntatic_tree:
	cc -Wall -Wextra -Wpedantic ./src/arvore.c -c -g
	mv arvore.o ./src/

memory_check: compile
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor ./test/success.c


clean:
	rm ./src/lex.yy.c
	rm ./src/sintax.tab.c
	rm ./src/sintax.tab.h
	rm ./src/tabela.o
	rm ./src/arvore.o
	rm ./logfile.out
	rm ./tradutor