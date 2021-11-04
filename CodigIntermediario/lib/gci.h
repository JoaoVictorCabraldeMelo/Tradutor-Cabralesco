#ifndef GCI_H
#define GCI_H

#include <stdbool.h>

bool verify_for_errors(int errors_lex, int errors_sint, int errors_seman);

void show_message();

FILE* create_tac(char *filename);

void write_table(FILE *file);

void write_code(FILE *file);

void read_tree(FILE *file, Node *raiz);

void generate_mul_div_expression(FILE *file, Node *expression);

void generate_sub_add_expression(FILE *file, Node *expression);

int get_value();

int get_anterior(int quantity);

#endif 