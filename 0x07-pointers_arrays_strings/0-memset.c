#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: is the char to copy
 * @n: the number of times to copy b
 *
 * Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itsr;

	for (itsr = 0; itsr < n; itsr++)
	{
		s[itsr] = b;
	}

	return (s);
}
