#include <stdio.h>
#include <string.h>
#include <unistd.h>


/**
 * main - Print a string to strerr
 *
 * Return: 1 if successful
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, str, strlen(str);
}
