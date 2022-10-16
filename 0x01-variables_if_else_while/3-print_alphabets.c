#include <stdio.h>

/**
 * main- program entry point.
 *
 * Return: 0 if no errors, non-zero values if errors.
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return(0);
}
