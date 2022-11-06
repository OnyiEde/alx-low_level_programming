#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: bytes of the memory area pointed to by @s with @b
 * @s: memory area
 * @b: constant byte pointing to @s
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
