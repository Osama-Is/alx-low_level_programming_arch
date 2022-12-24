#include <stdio.h>

/**
 * main - Prints all possible different cobinations of two numbers
 *
 * Reutrn: Zero
 */
int main(void)
{
	char i = '0';
	char y = '1';

	while (i <= '8;)
	{
		while (y <= '9')
		{
			putchar(i);
			putchar(y);
			
			if (i == '8' && y == '9')
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
		i++
	}
	return (0);
}
