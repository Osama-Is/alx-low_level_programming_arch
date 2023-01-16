#include <main.h>

/**
 * main - Prints the numbers from 1 to 100
 *
 * Description:
 * - If the number is a multiple of 3, it prints "Fizz".
 * - If the nbumber is multiple of 5, it prints "Buzz".
 * - If the number is multiple of both 3 & 5, it prints "FizzBuzz"
 * - Each number or word should be separated by a space.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (n % 3 != 0 && n % 5 != 0)
		{
			printf("%d", n);
		}
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
		}
		if (n != 100)
		{
			printf(' ');	
		}
	}
	printf("\n");
}
