#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Width of the straight line
 */
void print_line(int n)
{
	while ((n > 0) ?  n-- : 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
