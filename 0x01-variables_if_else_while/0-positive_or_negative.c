#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char cmprstr[29];

	if (n > 5)
		cmprstr = "and is greater than 5";
	else if (n = 0)
		cmprstr = "and is 0";
	else
		cmprstr = "and is less than 6 and not 0";

	printf("Last digit of %d is \s", ldgt, cmprstr);
	return (0);
}
