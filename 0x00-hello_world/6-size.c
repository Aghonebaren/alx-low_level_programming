#include <stdio.h>

/**
 * main - this program prints the sizes of different types
 * @void: no arguments
 *
 * Description: Prints sizes of the types int, char, long int, long long int and float
 * Return: Function returns 0 and exits
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
