#include "tabela.h"
#include "colors.h"
#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Simbolo *first = NULL;

Simbolo *last = NULL;


Simbolo *coloca_simbolo(Simbolo simbolo)
{
  Simbolo *novo_simbolo = (Simbolo *)malloc(sizeof(Simbolo));
  novo_simbolo->coluna = simbolo.coluna;
  novo_simbolo->linha = simbolo.linha;
  novo_simbolo->escopo = simbolo.escopo;
  novo_simbolo->tipo = strdup(simbolo.tipo);
  novo_simbolo->tipo_funcao = strdup(simbolo.tipo_funcao);
  novo_simbolo->value = strdup(simbolo.value);
  novo_simbolo->nro_parametros = simbolo.nro_parametros;
  novo_simbolo->eh_parametro = simbolo.eh_parametro;
  novo_simbolo->next = NULL;
  novo_simbolo->back = NULL;
  novo_simbolo->first_arg_type = NULL;
  novo_simbolo->last_arg_type = NULL;

  if (first == NULL && last == NULL)
  {
    first = novo_simbolo;
    last = novo_simbolo;
  }
  else
  {
    last->next = novo_simbolo;
    novo_simbolo->back = last;
    last = novo_simbolo;
  }

  return novo_simbolo;
}

void coloca_argumentos(char *tipo, Simbolo *simbolo)
{
  Arg_Type *novo_argumento = (Arg_Type *)malloc(sizeof(Arg_Type));
  novo_argumento->tipo = strdup(tipo);

  if (simbolo->first_arg_type == NULL && simbolo->last_arg_type == NULL)
  {
    simbolo->first_arg_type = novo_argumento;
    simbolo->last_arg_type = novo_argumento;
  }
  else
  {
    simbolo->last_arg_type->next = novo_argumento;
    simbolo->last_arg_type->back = simbolo->last_arg_type;
    simbolo->last_arg_type = novo_argumento;
  }
}

void libera_tabela()
{
  if (first != NULL)
  {
    Simbolo *tmp = first;
    while (tmp != NULL)
    {
      Simbolo *aux;
      aux = tmp;
      free(aux->tipo);
      free(aux->tipo_funcao);
      free(aux->value);

      //Da free na arg list
      if (aux->first_arg_type != NULL)
      {
        Arg_Type *tmp = aux->first_arg_type;
        while (tmp != NULL)
        {
          Arg_Type *aux;
          aux = tmp;
          free(aux->tipo);
          tmp = tmp->next;
          free(aux);
        }
      }

      tmp = tmp->next;
      free(aux);
    }
  }
}

void mostra_tabela()
{
  if (first != NULL)
  {
    printf("\n\n\n");
    printf(MAG "|=====================================| Tabela de Simbolos |======================================|\n" RESET);
    printf(MAG "%-88s\n" RESET, " ");
    Simbolo *tmp = first;
    printf(MAG "%-10s" YEL "|" RESET MAG "%-10s" YEL "|" RESET MAG " %-10s" YEL "|" RESET MAG "%-30s" YEL "|" RESET MAG "%-10s" YEL "|" RESET MAG "%-12s" RESET YEL "|" RESET MAG "%-10s\n" RESET, "Linha", "Coluna",
           "Escopo", "ID", "Tipo", "Eh Funcao", "Nro Param");
    while (tmp != NULL)
    {
      printf(MAG "%-10d" YEL "|" RESET MAG "%-10d" YEL "|" RESET MAG " %-10d" YEL "|" RESET MAG "%-30s" YEL "|" RESET MAG "%-10s" YEL "|" RESET MAG "%-12s" RESET YEL "|" RESET MAG "%-10d\n" RESET, tmp->linha, tmp->coluna,
             tmp->escopo, tmp->value, tmp->tipo, tmp->tipo_funcao, tmp->nro_parametros);

      tmp = tmp->next;
    }
    printf(MAG "|===============================================||================================================|" RESET);
    printf("\n\n");
  }
  else
    printf("Nao ha lista de simbolos para mostrar!!\n");
}

int calcula_nro_parametros()
{
  if (last != NULL)
  {
    int count = 0;
    Simbolo *tmp = last;
    while (tmp != NULL)
    {

      if (strcmp(tmp->tipo_funcao, "Eh funcao") == 0)
        break;

      if (tmp->eh_parametro)
      {
        count++;
      }

      tmp = tmp->back;
    }
    return count;
  }

  return 0;
}

void seta_argumentos(Simbolo *sim)
{
  if (last != NULL)
  {
    Simbolo *tmp = last->back;
    while (tmp != NULL)
    {

      if (strcmp(tmp->tipo_funcao, "Eh funcao") == 0)
        break;

      if (tmp->eh_parametro)
      {
        coloca_argumentos(tmp->tipo, sim);
      }

      tmp = tmp->back;
    }
  }
}

int get_escopo(Folha *id)
{
  if (last != NULL)
  {
    Simbolo *tmp = last;
    while (tmp != NULL)
    {
      if (strcmp(tmp->value, id->valor) == 0)
      {
        return tmp->escopo;
      }
      tmp = tmp->back;
    }
  }
  return -1;
}
