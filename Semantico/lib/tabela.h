#ifndef TABELA_H
#define TABELA_H

#include "arvore.h"

#include <stdbool.h>

typedef struct Simbolo
{
  int linha;
  int coluna;
  int escopo;
  int nro_parametros;
  bool eh_parametro;
  char *tipo_funcao;
  char *tipo;
  char *value;
  struct Simbolo *back;
  struct Simbolo *next;
} Simbolo;

extern Simbolo *first;

extern Simbolo *last;

void coloca_simbolo(Simbolo simbolo);

void libera_tabela();

void mostra_tabela();

int calcula_nro_parametros();

#endif
