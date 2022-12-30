#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer
 *
 * Return: The absolute value
 */
int _abs(int i)
{
	int a;

	if (i < 0)
	{
		a = i * -1;
		return (a);
	}
	else
	{
		return (i);
	}
}
