#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Zero
 */
int main(void)
{
	short i = 48;

	while (i <= 56)
	{
		putchar(i);

		if (i != 56)
		{
			putchar(',');
		}

		putchar(' ');
		i++;
	}

	putchar('\n');

	return (0); }
