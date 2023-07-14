#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocate memory using malloc and exit if failed
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory or exit with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}

