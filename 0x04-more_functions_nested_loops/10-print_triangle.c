#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 *
 * Description:
 * - Only _putchar function is allowed to print
 * - If size is 0 or less, the function should print only a new line
 * - The '#' is used to print the triangle
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int y = 10 - i;
		int z = i;

		while (y--)
		{
			_putchar(' ');
		}
		while(z--)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
