#include "main.h"

/**
 * *_memeset - constant byte of fills memory
 * @s : is a pointer to put the constant
 * @b : is the constant
 * @n : the max bytes to use
 *
 * return : pointer s
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
