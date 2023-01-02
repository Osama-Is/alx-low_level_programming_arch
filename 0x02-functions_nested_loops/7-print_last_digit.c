#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number whose last digit is to be printed
 *
 * Return: The last digit
 */
int print_last_digit(int num)
{
	int ldgt;

	ldgt = num % 10;

	if (ldgt < 0)
	{
		ldgt = ldgt * -1;
	}

	_putchar('0' + ldgt);

	return (ldgt);
}
