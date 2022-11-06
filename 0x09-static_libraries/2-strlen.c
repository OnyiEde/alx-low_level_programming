#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string pointer to the string's length to be found
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
