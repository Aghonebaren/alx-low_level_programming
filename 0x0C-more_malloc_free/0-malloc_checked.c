#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: total bytes to be allocated
 *
 * Return: returns pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void memalloc = malloc(b);

	if (memalloc = NULL)
		exit(98);

	return (memalloc);
}
