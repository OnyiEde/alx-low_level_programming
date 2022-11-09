#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return: pointer to the first occurence of @c in the @s
 * NULL, if @c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
