#include "main.h"
/**
 * _pow_recursion - returns value of x raised to y
 * @x: the number
 * @y: the superscript
 *
 * Return: returns x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
