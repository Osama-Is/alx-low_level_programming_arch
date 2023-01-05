#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number from which to start printing
 */
void print_to_98(int n)
{
	for (; n <= 98)
	{
		printf("%d, ", n);
		
		if (n == 98)
		{
			putchar('\n');
		}
	}
}
