#include "main.h"
/**
 * _isupper - function checks if character is Uppercase
 * @c: test parameter
 *
 * Return: return 1 if it is upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
