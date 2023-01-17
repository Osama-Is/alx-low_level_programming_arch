#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always Zero
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (i <= sqrt(n))
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", n);

	return (0);
}
