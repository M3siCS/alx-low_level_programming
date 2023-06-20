#include <stdio.h>

/**
 * main -ntry point
 *
 * Description: print 9-0 using putchar
 *		while using int varible
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
