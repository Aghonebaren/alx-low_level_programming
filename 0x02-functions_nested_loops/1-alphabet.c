#include "main.h"
/**
 * print_alphabet - prints the English Alphabet to stdout
 *
 * Return: always success
 */

int print_alphabet(void)
{
	char c;
	for (c='a'; c<='z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
