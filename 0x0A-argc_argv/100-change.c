#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min amount of coins to make a change
 * @argc: argument count
 * @argv: argument vector
 *
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your
 * program is not exactly 1, print Error,
 * followed by a new line, and return 1
 * use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative
 * print 0, followed by a new line
 * You can use an unlimited number of coins of
 * values 25, 10, 5, 2, and 1 cent
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int cents, coins_number;

	cents = 0;
	coins_number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coins_number += 1;
		}
	}
	printf("%d\n", coins_number);
	return (0);
}
