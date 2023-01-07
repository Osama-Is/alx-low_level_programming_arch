#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Zero
 */
int main(void)
{
	long int a = 1, b = 2;
	int i;

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (i = 3; i <= 50; i++)
	{
		long int c = a + b;

		printf("%ld", c);

		if (i != 50)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	putchar('\n');

	return (0);
}
