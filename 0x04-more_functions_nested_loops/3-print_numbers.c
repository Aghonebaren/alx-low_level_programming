#include "main.h"
/**
 * print_numbers - function prints numbers from 0-9
 * @void: no argument
 *
 * Return: Always success
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n);
	}
	_putchar('\n');
}
