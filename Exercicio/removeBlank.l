%{
  #include <stdio.h>
  #include <string.h>
  FILE *fp;
  char filename[30];
  int writeOne();
  int other();
%}

seqWhitespace [\s+]
other [\S+]

%%
{seqWhitespace} {
  printf("Seq de espaços\n");
  writeOne();
}
{other} {
  printf("Qualquer outro caractere\n");
  other();
}
%%

int writeOne() {
  fwrite(" ", 1, sizeof(" "), fp);
  return 0;
}

int other() {
  fwrite(yytext, 1, sizeof(yytext), fp);
  return 0;
}

int main (int argc, char**argv) {
  printf("%d", argc);
  if(argc > 1){
    if(!(yyin = fopen(argv[1], "r"))){
      perror(argv[1]);
      return(1);
    }
    strcpy(filename, argv[1]);
    strcat(filename, ".copy");
    fp = fopen(filename, "w");
  }
  fclose(fp);
  fclose(yyin);
  yylex_destroy();
  return(0);
}