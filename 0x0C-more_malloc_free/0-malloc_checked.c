#include <stdlib.h>
/**
 * malloc_checked - allocated memory using malloc and exit if field
 *
 * @b: int
 *
 * Return: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)

		exit(98);


	return (m);

}
