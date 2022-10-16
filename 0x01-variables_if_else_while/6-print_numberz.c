#include <stdio.h>

/**
 * main- program entry point.
 *
 * Return: 0 if errors, non-zero if no errors.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9', i++)
		putchar(i);
	putchar('\n');
	return (0);
}
