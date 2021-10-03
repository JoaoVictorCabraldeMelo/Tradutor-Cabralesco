#ifndef TABELA_H
#define TABELA_H

#include "arvore.h"
typedef struct Simbolo
{
  int linha;
  int coluna;
  int escopo;
  char *tipo_funcao;
  char *tipo;
  char *value;
  struct Simbolo *next;
} Simbolo;

extern Simbolo *first;

extern Simbolo *last;

void coloca_simbolo(Simbolo simbolo);

void libera_tabela();

void mostra_tabela();

#endif
