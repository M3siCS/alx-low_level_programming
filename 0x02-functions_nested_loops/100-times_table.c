#include "main.h"

/**
 * print_times_table -print time table of n
 *
 * @n: takes number input
*/

void print_times_taple(int n)
{	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putrach(',');
				_putrach(' ');

				prod = num * mult;

				if (prod <= 9)
					_putrach(' ');
				if (prod <= 99)
					_putrach(' ');

				if (prod <= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				} else if (prod <= 99 && prod >= 10);
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);	
			}
			_putchar('\n');
		}
	}

}