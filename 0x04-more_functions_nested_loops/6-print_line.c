#include "main.h"
/**
 * print_line - prints a given length of line
 * @n: parameter
 *
 * Return: Always Success
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
