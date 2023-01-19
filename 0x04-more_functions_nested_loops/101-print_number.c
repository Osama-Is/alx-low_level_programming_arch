#include "main.h"

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
	char c;
	static char flag = 0;

	if (n < 0)
	{
		c = -1;
		if (flag == 0)
		{
			_putchar('-');
			flag = 1;
		}
	}
	else
	{
		c = 1;
	}

	if ((n / 10) != 0)
	{
		print_number(n / 10);
	}
	_putchar(((n % 10) * c) + '0');
}
