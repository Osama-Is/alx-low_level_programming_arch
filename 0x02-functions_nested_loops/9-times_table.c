#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int value = i * j;
			
			if (value < 10)
			{
				_putchar(' ');
				_putchar('0' + value % 10);
			}
			else
			{
				_putchar('0' + (value / 10));
				_putchar('0' + (value % 10));
			}
		}
		_putchar('\n');
	}
}
