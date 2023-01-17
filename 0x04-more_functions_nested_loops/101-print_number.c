#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Decription:
 * - Only '_putchar' function is allowed to print
 * - Not allowed to use long
 * - Not allowed to use array pointers
 * - Not allowed to hard codde special values
 */
void print_number(int n)
{
	static int i = 0;

	i++;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	i--;
	_putchar(n % 10 + '0');
	if (i == 0)
	{
		_putchar('\n');
	}
}
