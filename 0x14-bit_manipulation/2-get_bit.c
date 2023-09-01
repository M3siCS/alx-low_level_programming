#include "main.h"

/**
 * get_bit - Retrieve the value of a bit at a specified index.
 * @n: Decimal parameter.
 * @index: index at which to check bit
 * Return: value of the bit, or -1 if there is an error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int Bit;

	Bit = (n >> index);
	if (index > 32)
		return (-1);
	return (Bit & 1);
}
