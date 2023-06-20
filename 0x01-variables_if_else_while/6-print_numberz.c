#include <stdio.h>

/**
 * main -ntry point
 *
 * description: print 9-0 using putchar
 *		while using int varible
 *
 * return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCLL reprasentaion*/
		putchar(digit +'0');
		digit++;
	}
	printf("\n";)
	return (0);
}
