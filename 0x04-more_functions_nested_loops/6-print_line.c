#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Width of the straight line
 *
 * Description:
 * 	- Only '_putchar' function is allowed.
 * 	- The line should end with a \n.
 * 	- If n is 0 or less, the function should only print \n.
 */
void print_line(int n)
{
	while ((n > 0) ?  n-- : 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
