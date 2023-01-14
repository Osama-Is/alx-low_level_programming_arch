#include "main.h"

/**
 * _isdigit - Checks for a digit between '0' and '9'
 * @c: The character to be checked
 *
 * Returns: '1' if True, '0' otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
