#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Zero
 */
int main(void)
{
	int summul3;
	int summul5;
	int lmul3 = 1024 / 3;
	int lmul5 = 1024 / 5;
	int ntrm3 = lmul3 / 3;
	int ntrm5 = lmul5 / 5;

	summul3 = 3 * ((1 + ntrm3) * (ntrm3 / 2));
	summul5 = 5 * ((1 + ntrm5) * (ntrm5 / 2));

	printf("%d", summul3 + summul5);

	return (0);
}
