#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "tabela.h"
#include "arvore.h"

int erros_semanticos = 0;

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

    if (tmp == NULL){
      erros_semanticos++;
      return nao_foi_declarado;
    }
    else
      return tmp->tipo;
  }

  erros_semanticos++;
  return nao_foi_declarado;
}

void sum_types(Node *expressionA, Node *expressionB)
{

  if(
      (strcmp(expressionA->type, "int") == 0 || strcmp(expressionA->type, "float")) &&
      (strcmp(expressionB->type, "int") == 0 || strcmp(expressionB->type, "float") == 0)
    )
  {
    printf("Do conversion !!");
  }else{
    erros_semanticos++;
  }

}
