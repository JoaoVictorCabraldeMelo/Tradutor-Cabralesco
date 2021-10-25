all:
	bison ./src/syntax.y --defines=./lib/syntax.tab.h -Wcounterexample -t -o ./src/syntax.tab.c; \
	flex -o ./src/lex.yy.c ./src/lexico.l; \
	cc  -Wall -Wextra -Wpedantic -g ./src/*.c -o tradutor -Ilib -O0 -lm; \

memory_check: 
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor ./test/corrects/success.cipl


clean:
	rm ./src/lex.yy.c
	rm ./src/syntax.tab.c
	rm ./lib/syntax.tab.h
	rm ./logfile.out
	rm ./tradutor