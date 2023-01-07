#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Zero
 */
int main(void)
{
	int fpmmb = 1;
	int spmmb = 2;
	int i;

	putchar('1');
	putchar('2');

	for (i = 2; i <= 50; i++)
	{
		int curr = fpmmb + spmmb;
		printf("%d, ", curr);

		fpmmb = spmmb;
		spmmb = curr;
	}
	putchar('\n');

	return (0);
}
