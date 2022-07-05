#include "main.h"
/**
 * _isalpha - tests a character to see if it is a letter
 * @c: parameter to test
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
