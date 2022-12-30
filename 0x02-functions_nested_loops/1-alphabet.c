#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char i = 97;
	
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n);
}
