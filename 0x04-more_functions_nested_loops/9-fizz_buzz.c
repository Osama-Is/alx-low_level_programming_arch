#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 *
 * Description:
 * - If the number is a multiple of 3, it prints "Fizz".
 * - If the nbumber is multiple of 5, it prints "Buzz".
 * - If the number is multiple of both 3 & 5, it prints "FizzBuzz"
 * - Each number or word should be separated by a space.
 * Return: Always Zero
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i != 100)
		{
			printf(" ");	
		}
	}
	printf("\n");

	return (0);
}
