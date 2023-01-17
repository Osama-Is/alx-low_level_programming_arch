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
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	_putchar('\n');
}
