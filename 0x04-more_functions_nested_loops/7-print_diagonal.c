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
	while ((n > 0) ? n-- : 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
