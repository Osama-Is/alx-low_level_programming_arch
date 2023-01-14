#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y <= 14; y++)
		{
			int fd, sd;

			fd = y % 10;
			_putchar(fd + '0');

			if (y >= 10)
			{
				sd = y / 10;
				_putchar(sd + '0');
			}
		}
		_putchar('0');
	}
}
