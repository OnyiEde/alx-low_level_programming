#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: address of string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";	
