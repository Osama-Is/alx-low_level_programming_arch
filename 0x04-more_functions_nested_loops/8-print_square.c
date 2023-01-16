#include "main.h"

/**
 * print_square - prints a square
 * @size: The size of the square
 *
 * Description:
 * - If size is 0 or less, the function should print only a new line
 * - The character '#' is used to print the square
 */
void print_square(int size)
{
	int i, y;

	for (i = 0; i < size; i++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
