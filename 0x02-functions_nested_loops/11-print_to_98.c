#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number from which to start printing
 *
 * Desription: n < 98 || n > 98
 */
void print_to_98(int n)
{
	while ((n <= 98) || (n >= 98))
	{
		if (n == 98)
		{
			printf("%d", n);
			putchar('\n');
			break
		}
		else
		{
			printf("%d, ", n);
		}
		if ((98 - n) >= 0)
		{
			n += (98 - n) / (98 - n);
		}
		else
		{
			n += -(98 - n) / (98 - n);
	}
}
