#include "main.h"
/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
