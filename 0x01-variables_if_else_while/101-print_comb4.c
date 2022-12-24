#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Zero
 */
int main(void)
{
	short x = 48;
	short y = 49;
	short z = 50;
	
	while (x <= 55)
	{
		while (y <= 56)
		{
			while (z <= 57)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x == 55 && y == 56 && z == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
	return (0);
}
