#include <stdio.h>

/**
 * main - Entry point*
 *
 * Descriptoin: print all aplhaet in lowercase then in uppercase
 *
 * Return: Alwasy 0 (succrss)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a= z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*prints A= Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');

	return (0);
}

