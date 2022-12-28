#include <stdio.h>

/**
 * main - Print spossible combinations of two two-digit numbers
 *
 * Return: Zero
 */
int main(void)
{
	short x1 = 48;
	short x2 = 48;
	short y1 = 48;
	short y2 = 49;

	while (x1 <= 57)
	{
		while (x2 <= 57)
		{
			y1 = x1;
			y2 = x2 + 1;
			while (y1 <= 57)
			{
				while (y2 <= 57)
				{
					putchar(x1);
					putchar(x2);
					putchar(' ');
					putchar(y1);
					putchar(y2);
					if (x1 == 57 && x2 == 56 && y1 == 57 && y2 == 57)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					y2++;
				}
				y2 = 48;
				y1++;
			}
			x2++;
		}
		x2 = 48;
		x1++;
	}
	return (0);
}
