#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - funtion prints numbers passed to it
 * @separator: separator between the numbers
 * @n: number of parameters passed to the function
 * @...: variable number of parameters passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digits;
	int i;

	va_start (digits, n);

	for (i = 0; i < n; i++)
	{
		printf ("%d", va_arg(digits, int));

		if (i != (n - 1) && separator != NULL)
			printf ("%s", separator);
	}

	printf ("\n");

	va_end (digits);
}
