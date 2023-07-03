#include "main.h"

/**
 * *_memeset -fills memory with a constant byte
 * @s : memory area to be filled
 * @b : is the char to cpy
 * @n: the number of times to cpy b 
 *
 * return : pointer to memory areas
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
