#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The character to be checked
 *
 * Returns: '1' if True, '0' otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 75)
	{
		return (1);
	}
	return (0);
}
