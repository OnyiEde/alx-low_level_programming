#include <stdio.h>

/**
 * main- program entry point.
 *
 * Return: 0 if no errors, non-zero values if errors.
 */
int main(void)
{
	int num;

	for (num = '0'; njm <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
			else
			{
				putchar(',');
				putchar(' ');
			}
	}
putchar('\n');
return (0);
}
