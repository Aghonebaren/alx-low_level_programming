#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct printer - A new struct type
 * @symbol: symbol representing data type
 * @print: funtion pointer to a funtion that prints
 * 	a data type corresponding to symbol
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

}printer_t;

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
