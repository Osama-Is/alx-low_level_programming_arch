#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Zero
 */
int main(void)
{
	int sum;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}
	printf("%d", sum);

	return (0);
}
