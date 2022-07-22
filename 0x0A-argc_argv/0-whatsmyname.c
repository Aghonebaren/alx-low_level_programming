#include <stdio.h>
/**
 * main - prints name of program
 * @argc: number of arguments in the command line
 * @argv: lists the arguments passed
 *
 * Return: return always success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return 0;
}
