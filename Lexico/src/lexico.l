%option noinput nounput

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
int error = 0;
%}

ID [A-Za-z_]+[A-Za-z0-9_]*

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
  printf("Logical Operator: %s\n", yytext);
  columns += yyleng;
}

">"|">="|"<"|"<="|"=="|"!=" {
  printf("Bin Operator: %s\n", yytext);
  columns += yyleng;
}

"{"|"}" {
  printf("Scopes: %s\n", yytext);
  columns += yyleng;
}

"("|")" {
  printf("Expressions: %s\n", yytext);
  columns += yyleng;
}

";" {
  printf("End of expression: %s\n", yytext);
  columns += yyleng;
}

"," { 
  printf("Value separator: %s\n", yytext);
  columns += yyleng;
}


\? {
  printf("Head operator: %s\n", yytext);
  columns += yyleng;
}

\! {
  printf("Tail operator or negate operator: %s\n", yytext);
  columns += yyleng;
}

\% {
  printf("Tail operator with destructor: %s\n", yytext);
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
  printf("String: %s\n", yytext);
  columns += yyleng;
}

{DIGIT}*\.{DIGIT}+(E[+|-]?{DIGIT}+)? {
  printf("Float number: %s\n", yytext);
  columns += yyleng;
}

{DIGIT}+ {
  printf("Integer number: %s\n", yytext);
  columns += yyleng;
}


{LIST} {
  printf("List type: %s\n", yytext);
  columns += yyleng;
}

{TYPES} {
  printf("Basic type: %s\n", yytext);
  columns += yyleng;
}

{NULL} {
  printf("Empty List: %s\n", yytext);
  columns += yyleng;
}

{ASSIGN} {
  printf("Assign operator: %s\n", yytext);
  columns += yyleng;
}

{KEYWORD} {
  printf("Keyword: %s\n", yytext);
  columns += yyleng;
}

{OUTPUT} {
  printf("Output: %s\n", yytext);
  columns += yyleng;
}

{INPUT} {
  printf("Input: %s\n", yytext);
  columns += yyleng;
}

{CONSTRUCTOR} {
  printf("Constructor: %s\n", yytext);
  columns += yyleng;
}

{INFIX} {
  printf("Infix operator: %s\n", yytext);
  columns += yyleng;
}

{FUNCTION} {
  printf("Function operator: %s\n", yytext);
  columns += yyleng;
}


{ID} {
  printf("ID: %s\n", yytext);
  columns += yyleng;
}

. {
  error++;
  printf("Error: Unidentified token at line: %d and column: %d\n", lines, columns);
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