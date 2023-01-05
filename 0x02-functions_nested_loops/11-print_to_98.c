#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number from which to start printing
 *
 * Desription: 'n' can be less or greater than 98
 */
void print_to_98(int n)
{
	while (1)
	{
		printf("%d", n);

		if (n == 98)
		{
			putchar('\n');
			break;
		}
		printf("%d, ", n);
	}
}
