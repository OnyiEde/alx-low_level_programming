#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: address of string
 */

char *rot13(char *str)
{
	int m, n;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0; *(str + m); m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (a[n] == *(str + m))
			{
				*(str + m) = b[n];
				break;
			}
		}
	}
	return (str);
}
