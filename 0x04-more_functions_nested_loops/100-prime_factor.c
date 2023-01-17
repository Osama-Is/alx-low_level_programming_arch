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
	long int i;

	for (i = 2; i <= sqrt(n); i++)
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
	printf("%ld", n);

	return (0);
}
