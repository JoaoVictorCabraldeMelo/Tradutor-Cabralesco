#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tabela.h"
#include "arvore.h"

char *get_type_id(char *id)
{

  char *nao_foi_declarado = "Erro Semantico: O identifier nao foi declarado !!\n";
  if (first != NULL)
  {
    Simbolo *tmp = first;
    while (tmp != NULL)
    {
      if (strcmp(tmp->value, id) == 0)
        break;

      tmp = tmp->next;
    }

    if (tmp == NULL)
      return nao_foi_declarado;
    else
      return tmp->tipo;
  }

  return nao_foi_declarado;
}

void show_type(Node *expression)
{
  if (expression != NULL && expression->terminal_value != NULL)
  {
    printf("%s\n", expression->terminal_value->tipo);
  }
}
