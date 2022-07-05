#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 * @n: parameter given
 *
 * Return: always success
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		n++;
		{
			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	while (n >= 98)
	{
		printf("%d", n);
		n--;
		{
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
}
