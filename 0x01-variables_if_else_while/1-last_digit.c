#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- entry point to the program.
 *
 * Return: 0 if no errors, non-zero values if errors.
 */
int main(void)
{
	int n;
	int Idigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Idigit = n % 10;
	if (Idigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Idigit);
	}
	else if (Idigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Idigit);
	}
	else if (Idigit < 6 && Idigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Idigit);
	}
	return (0);
}
