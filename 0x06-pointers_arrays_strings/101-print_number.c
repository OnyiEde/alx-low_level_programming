#include "main.h"

/**
 * print_number - prints integers
 * @n: int
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	
