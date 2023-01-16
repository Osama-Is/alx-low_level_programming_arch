#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of time the charachter '\' should be printed
 *
 * Description:
 * - Only '_putchar' function is allowed
 * - The diagonal should end with a '\n'
 * - If 'n' is '0' or less, the function should only print a '\n'
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		int y = i;

		while (y--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
