#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - structure definition for printer
 * @symbol: symbol representing data type
 * @print: a fxn pointer that prints the appropriate symbol
 *
 * Code by 0xOneBeing
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list args);
} printer_t;

int sum_tree_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif