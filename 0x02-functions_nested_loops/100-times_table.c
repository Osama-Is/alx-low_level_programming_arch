#include "main.h"


void putnum(int n);

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which the time table will be printed.
 *
 * Description: if 'n' is greater than 15 or less than 0 \
 *	the function should not print anything.
 */
void print_times_table(int n)
{
	if (n <= 15 || n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int pdct = i * j;

				if (pdct < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					putnum(pdct);
				}
				else if (pdct < 100)
				{
					_putchar(' ');
					putnum(pdct);
				}
				else
				{
					putnum(pdct);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}


/**
 * putnum - Prints 'n' digit at a time
 * @n: The number to be printed
 */
void putnum(int n)
{
	if (n >= 10)
	{
		putnum(n / 10);
	}
	_putchar((n % 10) + '0');
}
