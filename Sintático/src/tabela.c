#include "tabela.h"
#include "colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Simbolo *first = NULL;

Simbolo *last = NULL;

void coloca_simbolo(Simbolo simbolo)
{
  Simbolo *novo_simbolo = (Simbolo *)malloc(sizeof(Simbolo));
  novo_simbolo->coluna = simbolo.coluna;
  novo_simbolo->linha = simbolo.linha;
  novo_simbolo->escopo = simbolo.escopo;
  novo_simbolo->tipo = strdup(simbolo.tipo);
  novo_simbolo->tipo_funcao = strdup(simbolo.tipo_funcao);
  novo_simbolo->value = strdup(simbolo.value);
  novo_simbolo->next = NULL;

  if (first == NULL && last == NULL)
  {
    first = novo_simbolo;
    last = novo_simbolo;
  }
  else
  {
    last->next = novo_simbolo;
    last = novo_simbolo;
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
    printf(MAGB "|================================| Tabela de Simbolos |================================|\n" RESET);
    printf( MAGB "%-88s\n" RESET, " ");
    Simbolo *tmp = first;
    printf(MAGB "%-10s" BYEL "|" RESET MAGB "%-10s" BYEL "|" RESET MAGB " %-10s" BYEL "|" RESET MAGB "%-30s" BYEL"|" RESET MAGB "%-10s" BYEL "|" RESET MAGB "%-12s\n" RESET, "Linha", "Coluna",
           "Escopo", "ID", "Tipo", "Eh Funcao");
    while (tmp != NULL)
    {
      printf(MAGB "%-10d" BYEL "|" RESET MAGB "%-10d" BYEL "|" RESET MAGB " %-10d" BYEL "|" RESET MAGB "%-30s" BYEL"|" RESET MAGB "%-10s" BYEL "|" RESET MAGB "%-12s\n" RESET, tmp->linha, tmp->coluna,
             tmp->escopo, tmp->value, tmp->tipo, tmp->tipo_funcao);

      tmp = tmp->next;
    }
    printf(MAGB "|=========================================||===========================================|" RESET);
    printf("\n\n");
  }
  else
    printf("Nao ha lista de simbolos para mostrar!!\n");
}


