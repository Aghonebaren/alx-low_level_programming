#include "main.h"
/**
 * _abs - computes absolute value of a given integer
 * @n: test parameter
 * Return: Always success
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
