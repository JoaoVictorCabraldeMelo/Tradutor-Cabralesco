#ifndef TABELA_H
#define TABELA_H

#include "arvore.h"

#include <stdbool.h>

typedef struct arg_types Arg_Type;

struct arg_types {
  char *tipo;
  Arg_Type *back;
  Arg_Type *next;
};

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

  //Cada parametro e colocada na lista
  Arg_Type *first_arg_type;
  Arg_Type *last_arg_type;

  struct Simbolo *back;
  struct Simbolo *next;
} Simbolo;

extern Simbolo *first;

extern Simbolo *last;

extern int errors_lex;

Simbolo * coloca_simbolo(Simbolo simbolo);

void coloca_argumentos(char *tipo, Simbolo *simbolo);

void libera_tabela();

void mostra_tabela();

int calcula_nro_parametros();

void seta_argumentos(Simbolo *sim);

int get_escopo(Folha *sim);

#endif
