#include "main.h"
/**
 * more_numbers - prints numbers from 0 - 14
 * @void: no arguments
 *
 * Return; Always success
 */
void more_numbers(void)
{
	int n;
	int c;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c);
		}
	_putchar('\n');

	}
	_putchar('\n');
}
