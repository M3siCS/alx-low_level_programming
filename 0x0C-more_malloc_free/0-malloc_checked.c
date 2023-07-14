#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - allocate memory using malloc and exit if failed
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory or exit with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

