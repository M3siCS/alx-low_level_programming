#include <stdio.h>

/**
 * main - entry point
 *
 * description: print all aplhabet letters expect q and e
 *
 * return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
