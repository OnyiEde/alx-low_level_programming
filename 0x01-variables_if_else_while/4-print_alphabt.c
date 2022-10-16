#include <stdio.h>

/**
 * main- program entry point.
 *
 * Return: 0 if no errors, non-zero values if errors.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
