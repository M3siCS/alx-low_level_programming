#include "main.h"

/**
 * _abs - function that comuputes the absolute
 *	value of an integer
 *
 * @n: tekes in integer type input forr function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
