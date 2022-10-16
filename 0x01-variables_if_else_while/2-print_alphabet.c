#include <stdio.h>
/**
 * main- entry point to the program.
 *
 * Return: 0 if no errors, non-zero values if errors.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
