#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms of Fibonacci sequence
 *
 * Description: The values of terms for Fibonacci sequence 
 * do not exceed 4,000,000.
 * Return: Zero
 */
int main(void)
{
	long int a = 1, b = 2, sum;

	while ((a+b) <= 4000000)
	{
		long int c = a + b;

		if ((c % 2) == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
