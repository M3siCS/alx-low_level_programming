#include <stdio.h>

/**
 * main - Entry point*
 *
 * Descriptoin: print all aplhaet letttres
 *
 * Return: Alwasy 0 (succrss)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
