#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Zero
 */
int main(void)
{
	int i;
	__int128 n1 = 1;
	__int128 n2 = 1;
	__int128 next;

	printf("%lld\n%lld\n", (long long)n1, (long long)n2);

	for (i = 3; i <= 98; i++)
	{
		next = n1 + n2;
		printf("%lld\n", (long long)next);
		n1 = n2;
		n2 = next;
	}

	return (0);
}
