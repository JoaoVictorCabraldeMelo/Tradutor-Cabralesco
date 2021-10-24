#ifndef GCI_H
#define GCI_H

#include <stdbool.h>


bool verify_for_errors(int errors_lex, int errors_sint, int errors_seman);

void show_message();

FILE* create_tac(char *filename);

void write_table(FILE *file);

#endif 