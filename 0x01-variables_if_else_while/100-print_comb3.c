#include <stdio.h>

/**
 * main - Prints all possible different cobinations of two numbers
 *
 * Return: Zero
 */
int main(void)
{
	short i = 48;
	short y = 49;

	while (i <= 56)
	{
		while (y <= 57)
		{
			putchar(i);
			putchar(y);

			if (i == 56 && y == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		i++;
		y = i + 1;
	}
	return (0);
}
