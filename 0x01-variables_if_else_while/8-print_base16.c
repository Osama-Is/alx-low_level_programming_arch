#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Zero
 */
int main(void)
{
	char i = 97;

	while (i <= 103)
	{
		putchar('\n');
		i++;
	}

	i = 48;
	
	while (i <= 57)
	{
		putchar('\n');
		i++;
	}

	putchar('\n');

	return (0);
}
