#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes being copied
 * @src: source memory area
 * @dest: destination memory area
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
