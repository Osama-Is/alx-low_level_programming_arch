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

	if (num < 0)
	{
		num = num * -1;
	}

	ldgt = num % 10;
	_putchar('0' + ldgt);

	return (ldgt);
}
