#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int sum;
	time_t c;

	srand(time(NULL));
	while (sum <= 26450)
	{
		c = rand() % 128;
		sum += c ;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
