%{
#include <stdio.h>
%}

delim [ \t\n]
ws {delim}*
letter [A-za-z_] 
digit [0-9]
string [\"([\\][\\][\"]|(\w)*)*(\w)*([\\][\\][\"]|(\w)*)*\"] 
id {letter}({letter} | {digit})*
number {digit}+\.{digit}+?(E[+-]?{digit}+?

%%
{ws} {}
if {return(IF);}
then {return(THEN);}
else {return(ELSE);}
while {return(WHILE);} /*a) while keyword*/
{id} {yylval = (int) installID(); return(ID);}
{number} {yylval = (int) installNumber(); return(NUMBER);}
{string} {yylval = (int) installString(); return(STRING);} /*d) coloca uma string //" no comentario */
"<" {yylval = LT; return(RELOP);}
"<=" {yylval = LE; return(RELOP);}
"==" {yylval = EQ; return(RELOP);} /* b) from '=' to '==' equal from C language*/
"<>" {yylval = NE; return(RELOP);}
">"  {yylval = GT; return(RELOP);}
">=" {yylval = GE; return(RELOP);}
%%


int installID() {
  printf("Colocando ID na tabela de simbolos\n");
  return 0;
}

int installNumber() {
  printf("Colocando NUMBER na tabela de simbolos\n");
  return 0;
}

int installString() {
  printf("Colocando STRING na tabela de simbolos\n");
  return 0;
}

int main(int argc, char**argv) {
  ++argv, --argc;
  if(argc > 0){
    yyin = fopen(argv[0], "r");
  } else {
    yyin = stdin;
  }

  fclose(yyin);
  yylex_destroy();
  return 0;
}

