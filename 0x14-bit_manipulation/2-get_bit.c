#include "main.h"

/*
 * get_bit - Obtain the value of a bit at a given index.
 * @n: Decimal parameter.
 * @index: Index.
 * Return: The value.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
