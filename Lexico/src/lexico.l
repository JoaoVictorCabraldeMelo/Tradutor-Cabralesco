%option noinput nounput
/*%option noyywrap*/
%{
#include <stdio.h>
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define RESET "\e[0m"
int lines = 0;
int columns = 0;
int errors = 0;
%}

ID [A-Za-z_]+[A-Za-z0-9_]*

LETTER [A-Za-z]

DIGIT [0-9]

LIST list

TYPES int|float

NULL NIL

STRING \"[^\"]*\"|'[^']*'

ASSIGN =

KEYWORD if|else|for|return

OUTPUT writeln|write 

INPUT read

CONSTRUCTOR rvalue|leftvalue 

INFIX :

FUNCTION >>|<<

COMMENT \/\/.*|\/\*[^\*\/]*\*\/


%%
"+"|"-"|"*"|"/" {
  printf("Arithmetic Operator:" GRN " %s" RESET "\t at line: " YEL "%d" RESET " and column: " YEL "%d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

"||"|"&&" {
  printf("Logical Operator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n"RESET, yytext, lines, columns);
  columns += yyleng;
}

">"|">="|"<"|"<="|"=="|"!=" {
  printf("Bin Operator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

"{"|"}" {
  printf("Scopes:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

"("|")" {
  printf("Expressions:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

";" {
  printf("End of expression:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

"," { 
  printf("Value separator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}


\? {
  printf("Head operator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

\! {
  printf("Tail operator or negate operator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

\% {
  printf("Tail operator with destructor:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}


[\t ]+ {
  columns += yyleng;
} 

\n|\r {
  lines++;
  columns = 0;
}

{COMMENT} {
  columns += yyleng;
}

{STRING} {
  printf("String:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{DIGIT}*\.{DIGIT}+(E[+|-]?{DIGIT}+)? {
  printf("Float number:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{DIGIT}+ {
  printf("Integer number:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}


{LIST} {
  printf("List type:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{TYPES} {
  printf("Basic type:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{NULL} {
  printf("Empty List:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{ASSIGN} {
  printf("Assign operator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{KEYWORD} {
  printf("Keyword:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{OUTPUT} {
  printf("Output:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{INPUT} {
  printf("Input:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{CONSTRUCTOR} {
  printf("Constructor:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{INFIX} {
  printf("Infix operator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{FUNCTION} {
  printf("Function operator:" GRN " %s" RESET "\t at line:" YEL " %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}


{ID} {
  printf("ID:" GRN " %s" RESET "\t at line:" YEL" %d" RESET " and column:" YEL " %d\n" RESET, yytext, lines, columns);
  columns += yyleng;
}

{DIGIT}+{LETTER}+ {
   errors++;
  printf(RED "Error: %s" RESET " Not a valid token at line: %d and column: %d\n", yytext, lines, columns);
}

. {
  errors++;
  printf(RED "Error: %s" RESET " Unidentified token at line: %d and column: %d\n", yytext, lines, columns);
}

%%

int main(int argc, char**argv) {
  FILE *fp;
  
  if(argc > 1){
    fp = fopen(argv[1], "r");
    yyin = fp;
  }else {
    yyin = stdin;
  }
  yylex();
  printf("\n");

  fclose(fp);
  yylex_destroy();
  return 0;
}