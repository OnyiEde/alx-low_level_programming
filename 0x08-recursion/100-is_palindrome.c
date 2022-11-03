#include "main.h"

/**
 * _strlen_recursion - prints length of s
 * @s: string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * pal_checker - check if s is a palindrome
 * @s: string base address
 * @l: left index
 * @r: right index
 * Return: 1 if s is palindrome, 0 if otherwise
 */

int pal_checker(char *s, int l, int r)
{
	if (s[l] == s[r])
		if (l > j / 2)
			return (1);
		else
			return (pal_checker(s, l + 1, r - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if s is palindrome
 * @s: string
 *
 * Return: if n is prime, 0 of otherwise
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
