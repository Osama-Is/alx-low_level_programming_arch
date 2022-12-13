#include <stdio.h>

/**
 * main - Prints the size of various types standard ouptut
 * 
 * Return: 0 if executed successfully
 */
int main(void)
{
	printh("Size of a char: %d byte(s)", sizeof(char));
	printh("Size of a int: %d byte(s)", sizeof(int));
	printh("Size of a long int: %d byte(s)", sizeof(long int));
	printh("Size of a long long int: %d byte(s)", sizeof(long long int));
	printh("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}
