#ifndef PILHA_H
#define PILHA_H

typedef struct scope
{
  int scope_size;
  struct scope *superior;
  struct scope *next;
} Escope;


extern Escope * escopo_atual;

extern Escope * escopo_global;

extern Escope * primeiro_escopo;

extern Escope * ultimo_escopo;

extern int contador_escopo;

Escope* bota_escopo();

void fecha_escopo();

void coloca_escopo_na_lista(Escope *escope);

void libera_escopos();

#endif