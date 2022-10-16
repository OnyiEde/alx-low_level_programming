#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point.
 *
 * Return: 0 if error, non-zero values if no errors
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else (n > 0)
		printf("%d is positive\n", n);

	return(0);
}
