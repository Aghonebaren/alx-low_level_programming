#include "main.h"
/**
 * _islower - prints only lowercase
 * @c: test parameter
 * Return: always success
 */
int _islower(int c)
{
	if (c > 94 && c < 123)
		return (1);
	else
		return (0);
}
