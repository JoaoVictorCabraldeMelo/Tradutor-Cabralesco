#ifndef __PILHA_H__
#define __PILHA_H__

typedef struct Item
{
  char value;
  struct Item *next;
} Pilha;

Pilha* criaNo(char escope);

int taVazia(Pilha *topo);

void push(Pilha** topo, char escope);

char pop(Pilha** topo);

void freePilha(Pilha** topo);

#endif