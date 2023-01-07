#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Zero
 */
int main(void)
{
	long int fpmmb = 1;
	long int spmmb = 2;
	int i;

	putchar('1');
	putchar('2');

	for (i = 2; i <= 50; i++)
	{
		long int curr = fpmmb + spmmb;
		printf("%ld, ", curr);

		fpmmb = spmmb;
		spmmb = curr;
	}
	putchar('\n');

	return (0);
}
