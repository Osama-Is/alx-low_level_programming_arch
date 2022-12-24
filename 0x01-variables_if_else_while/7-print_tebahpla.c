#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Zero
 */
int main(void)
{
	char i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
