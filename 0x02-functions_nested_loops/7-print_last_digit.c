#include "main.h"
/**
 * print_last_digit - prints last digit of a given number
 * @n: parameter
 * Return: always success
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar('0' + c);
	return (c);
}
