#include <stdio.h>

/* main - prints the alphabet in both lower case and uppercase
 *
 * Return: zero
 */
int main(void)
{
	char i = 97;

	while (i >= 122)
	{
		putchar(i);
		i++;
	}
	
	i = 65;

	while (i <= 90)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
