#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy
 * of the string given as a parameter.
 *
 * @str: source string
 * Return: pointer to a new str a duplicate of source str
 * returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *copy;
	int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	copy  = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
