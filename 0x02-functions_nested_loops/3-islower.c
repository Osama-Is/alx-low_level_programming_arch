#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Reuturn: 0 if False & 1 if True
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	return (0);
}
