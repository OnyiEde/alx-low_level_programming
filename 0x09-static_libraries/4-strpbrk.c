#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: 2nd string
 *
 * Return: pointer to the byte in s that
 * matches one of the bytes in accept, or
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
