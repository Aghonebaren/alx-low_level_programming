#include "main.h"
/**
 * _islower - prints only lowercase
 *
 * Return: always success
 */
int _islower(int c)
{
	if (c > 94 && c < 123)
		return (1);
	else
		return (0);
}
