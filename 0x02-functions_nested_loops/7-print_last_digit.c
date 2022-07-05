#include "main.h"
/**
 * print_last_digit - prints last digit of a given number
 * @n: parameter
 * Return: always success
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}

	_putchar('0' + n);
	return (n);
}
