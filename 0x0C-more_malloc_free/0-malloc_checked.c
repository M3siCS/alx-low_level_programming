#include <stdlib.h>
/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)

		return (NULL);


	return (m);

}
