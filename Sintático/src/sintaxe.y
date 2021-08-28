
%define lr.type canonical-lr 

%{
  #include <stdio.h>
  extern FILE *yyin;
  void yyerror(char const *s);
  int yylex(void);
  int yylex_destroy(void); 
%}

%%
%%

void yyerror(char *s){
  fprintf(stderr, "%s\n", s);
}

int main(int argc, char **argv) {

  FILE *fp;

  if(argc > 1){
    fp = fopen(argv[1], "r");
    yyin = fp;
  } else {
    yyin = stdin;
  }

  yyparse();

  if(argc > 1){
    fclose(fp);
  }

  yylex_destroy();

  return 0;
}

