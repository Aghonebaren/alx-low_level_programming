#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters passed to it
 * @n: number of parameters
 * @...: variable number of parameters to calculate
 *
 * Return: return sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list digits;
	int i, sum;

	va_start(digits, n);

	for (i = 0; i < n; i++)
		sum += va_arg(digits, int);

	va_end(digits);

	return (sum);
}
