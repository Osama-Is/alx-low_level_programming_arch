#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Zero
 */
int main(void)
{
	short i = 48;

	while (i <= 57)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
		}

		putchar(' ');
		i++;
	}

	//putchar('\n');

	return (0); }
