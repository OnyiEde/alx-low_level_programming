#include <stdio.h>
#include "maun.h"

/**
 * main - entry point to the program
 *
 * Description: prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * for the multiples of five print Buzz
 * for numbers which are multiples of both print FizzBuzz
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf('\n');
	return (0);
}
