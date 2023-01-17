#include <main.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 */
int main(void)
{
	long long int n = 612852475143;
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
	printf("%lld", n);
}