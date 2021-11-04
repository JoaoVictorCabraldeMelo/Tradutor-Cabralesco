#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "colors.h"
#include "tabela.h"
#include "arvore.h"
#include "gci.h"

char *space = " ";
char *enter = "\n";

int count = 0;

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

void write_code(FILE *file)
{
  char *code = ".code\n";

  fprintf(file, "%s", code);

  if (raiz != NULL)
  {
    read_tree(file, raiz);
  }
}

void read_tree(FILE *file, Node *raiz)
{
  if (raiz == NULL)
    return;

  for (int i = 0; i < 7; i++)
    read_tree(file, raiz->filhos[i]);

  if (raiz->production_value != NULL)
  {
    generate_mul_div_expression(file, raiz);
    generate_sub_add_expression(file, raiz);
    generate_assign_expression(file, raiz);
    generate_type_conversion(file, raiz);
  }
}

void generate_mul_div_expression(FILE *file, Node *expression)
{
  if (strcmp(expression->production_value, "arithmMulDivExpression") == 0)
  {
    if (strcmp(expression->filhos[1]->terminal_value->valor, "*") == 0)
    {
      if (expression->filhos[0]->terminal_value != NULL && expression->filhos[2]->terminal_value != NULL &&
          strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0 &&
          strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "mul $%d, %s, %s\n", get_value(), expression->filhos[0]->terminal_value->valor, expression->filhos[2]->terminal_value->valor);
      }
      else if (expression->filhos[0]->terminal_value != NULL &&
               strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0)
      {
        fprintf(file, "mul $%d, $%d, %s\n", get_value(), get_anterior(1), expression->filhos[0]->terminal_value->valor);
      }
      else if (expression->filhos[2]->terminal_value != NULL &&
               strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "mul $%d, %s, $%d\n", get_value(), expression->filhos[2]->terminal_value->valor, get_anterior(1));
      }
      else
      {
        fprintf(file, "mul $%d, $%d, $%d\n", get_value(), get_anterior(2), get_anterior(1));
      }
    }
    else
    {
      if (expression->filhos[0]->terminal_value != NULL && expression->filhos[2]->terminal_value != NULL &&
          strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0 &&
          strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "div $%d, %s, %s\n", get_value(), expression->filhos[0]->terminal_value->valor, expression->filhos[2]->terminal_value->valor);
      }
      else if (expression->filhos[0]->terminal_value != NULL &&
               strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0)
      {
        fprintf(file, "div $%d, %s, $%d\n", get_value(), expression->filhos[0]->terminal_value->valor, get_anterior(1));
      }
      else if (expression->filhos[2]->terminal_value != NULL &&
               strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "div $%d, $%d, %s\n", get_value(), get_anterior(1), expression->filhos[2]->terminal_value->valor);
      }
      else
      {
        fprintf(file, "div $%d, $%d, $%d\n", get_value(), get_anterior(2), get_anterior(1));
      }
    }
  }
}

void generate_sub_add_expression(FILE *file, Node *expression)
{

  if (strcmp(expression->production_value, "arithmExpression") == 0)
  {
    if (strcmp(expression->filhos[1]->terminal_value->valor, "+") == 0)
    {
      if (expression->filhos[0]->terminal_value != NULL && expression->filhos[2]->terminal_value != NULL &&
          strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0 &&
          strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "add $%d, %s, %s\n", get_value(), expression->filhos[0]->terminal_value->valor, expression->filhos[2]->terminal_value->valor);
      }
      else if (expression->filhos[0]->terminal_value != NULL &&
               strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0)
      {
        fprintf(file, "add $%d, %s, $%d\n", get_value(), expression->filhos[0]->terminal_value->valor, get_anterior(1));
      }
      else if (expression->filhos[2]->terminal_value != NULL &&
               strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "add $%d, $%d, %s\n", get_value(), get_anterior(1), expression->filhos[2]->terminal_value->valor);
      }
      else
      {
        fprintf(file, "add $%d, $%d, $%d\n", get_value(), get_anterior(2), get_anterior(1));
      }
    }
    else
    {
      if (expression->filhos[0]->terminal_value != NULL && expression->filhos[2]->terminal_value != NULL &&
          strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0 &&
          strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "sub $%d, %s, %s\n", get_value(), expression->filhos[0]->terminal_value->valor, expression->filhos[2]->terminal_value->valor);
      }
      else if (expression->filhos[0]->terminal_value != NULL &&
               strcmp(expression->filhos[0]->type, "int_to_float") != 0 && strcmp(expression->filhos[0]->type, "float_to_int") != 0)
      {
        fprintf(file, "sub $%d, %s, $%d\n", get_value(), expression->filhos[0]->terminal_value->valor, get_anterior(1));
      }
      else if (expression->filhos[2]->terminal_value != NULL &&
               strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
      {
        fprintf(file, "sub $%d, $%d, %s\n", get_value(), get_anterior(1), expression->filhos[2]->terminal_value->valor);
      }
      else
      {
        fprintf(file, "sub $%d, $%d, $%d\n", get_value(), get_anterior(2), get_anterior(1));
      }
    }
  }
}

void generate_assign_expression(FILE *file, Node *expression)
{
  if (strcmp(expression->production_value, "expression") == 0 && strcmp(expression->filhos[1]->terminal_value->valor, "=") == 0)
  {
    if (expression->filhos[2]->terminal_value != NULL &&
        strcmp(expression->filhos[2]->type, "int_to_float") != 0 && strcmp(expression->filhos[2]->type, "float_to_int") != 0)
    {
      fprintf(file, "mov %s, %s\n", expression->filhos[0]->terminal_value->valor, expression->filhos[2]->terminal_value->valor);
    }
    else
    {
      fprintf(file, "mov %s, $%d\n", expression->filhos[0]->terminal_value->valor, get_anterior(1));
    }
  }
}

void generate_type_conversion(FILE *file, Node *expression)
{
  if (strcmp(expression->type, "int_to_float") == 0 && expression->terminal_value != NULL)
  {
    fprintf(file, "inttofl $%d, %s\n", get_value(), expression->terminal_value->valor);
  }
  else if (strcmp(expression->type, "int_to_float") == 0)
  {
    fprintf(file, "inttofl $%d, $%d\n", get_value(), get_anterior(1));
  }
  else if (strcmp(expression->type, "float_to_int") == 0 && expression->terminal_value != NULL)
  {
    fprintf(file, "fltoint $%d, %s\n", get_value(), expression->terminal_value->valor);
  }
  else if (strcmp(expression->type, "float_to_int") == 0)
  {
    fprintf(file, "fltoint $%d, $%d\n", get_value(), get_anterior(1));
  }
}

int get_value()
{
  int value = count % 9;
  count++;
  return value;
}

int get_anterior(int quantity)
{
  int value = abs(count - quantity);
  return value % 9;
}
