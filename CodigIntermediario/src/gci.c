#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "colors.h"
#include "tabela.h"

char *space = " ";
char *enter = "\n";

bool verify_for_errors(int errors_lex, int errors_sint, int errors_seman)
{

  if (errors_lex + errors_sint + errors_seman > 0)
    return true;

  return false;
}

void show_message()
{
  printf(BRED "Não pode gerar código intermediário com erros !!\n" RESET);
}

FILE *create_tac(char *filename)
{
  FILE *fp;

  char *fileTac = malloc(strlen(filename) + 1);

  strcpy(fileTac, filename);

  for (int i = 0; i < (int)strlen(filename); i++)
  {
    if (filename[i] == '.')
    {
      fileTac[i + 1] = 't';
      fileTac[i + 2] = 'a';
      fileTac[i + 3] = 'c';
      fileTac[i + 4] = '\0';
    }
  }

  fp = fopen(fileTac, "w");

  free(fileTac);

  return fp;
}

void write_table(FILE *file)
{

  char *table = ".table\n";

  fwrite(table, 1, sizeof(table) - 1, file);

  if (first != NULL)
  {
    Simbolo *tmp = first;
    while (tmp != NULL)
    {
      if ((strcmp(tmp->tipo, "int") == 0 || strcmp(tmp->tipo, "float") == 0) && strcmp(tmp->tipo_funcao, "Nao eh") == 0)
      {
        fprintf(file, "%s %s%d\n", tmp->tipo, tmp->value, tmp->escopo);
      }

      tmp = tmp->next;
    }
  }
}
