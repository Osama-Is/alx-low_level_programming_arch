#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Print the last digit of a number
 *
 * Return: 0 if executed successfully
 */
int main(void)
{
	int n;
	char ldgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ldgt = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d  and is greater than 5\n", n, ldgt);
	else if (n == 0)
		printf("Last digit of %d is %d and is and is 0\n", n ,ldgt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldgt);

	return (0);
}
