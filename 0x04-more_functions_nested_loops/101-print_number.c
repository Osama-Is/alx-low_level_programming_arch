#include "main.h"
#include <limits.h>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Decription:
 * - Only '_putchar' function is allowed to print
 * - Not allowed to use long
 * - Not allowed to use arrays or pointers
 * - Not allowed to hard code special values
 */
void print_number(int n)
{
	unsigned int pn;
	
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			pn = (unsigned int)(~n);
			pn++;
		}
		else
		{
			pn = -n;
		}
	}
	else
	{
		pn = (unsigned int)(n);
	}

	if ((pn / 10) != 0)
	{
		print_number(pn / 10);
	}
	_putchar((pn % 10) + '0');
}
