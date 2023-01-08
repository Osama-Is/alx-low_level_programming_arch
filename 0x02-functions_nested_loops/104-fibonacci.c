#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Description:
 * Not allowed to use any other library (You can’t use GMP etc…).
 * Not allowed to use long long, malloc, pointers, arrays/tables, or structures
 * Not allowed to hard code any Fibonacci number (except for 1 and 2).
 * Return: Zero
 */
int main(void)
{
	long int a1 = 0, a2 = 1;
	long int b1 = 0, b2 = 2;
	int i;

	printf("%ld, %ld, ", a2, b2);
	for (i = 3; i <= 98; i++)
	{
		long int c1 = (a1 + b1);
		long int c2 = (a2 + b2);

		if (c1)
		{
			printf("%ld", c1);
		}
		printf("%ld", c2);
		if (i != 98)
		{
			printf(", ");
		}

		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	putchar('\n');

	return (0);
}
