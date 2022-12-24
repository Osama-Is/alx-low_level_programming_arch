#include <stdio.h>

/**
 * main - prints all letters in lowercase except q & e
 *
 * Return: zero
 */
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		if (i != 'e' || i != 'q')
		{
			putchar(i);
		}

		i++;
	}

	return (0);
}
