#include <stdio.h>
/**
 * main - adds up multiples of 3 and 5 from 0 to 1024 and prints to stdout
 * @void: no argument
 * Return: always success
 */
int main(void)
{
	int a, b, c;
	int n;

	a = 0;
	b = 0;
	c = 0;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3) == 0)
		{
			a = a + n;
		}

		else if ((n % 5) == 0)
		{
			b = b + n;
		}
	}

	c = a + b;
	printf("%d\n", c);
	return (0);
}
