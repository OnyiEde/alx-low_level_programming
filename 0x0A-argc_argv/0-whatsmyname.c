#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * If you rename the program, it will print the
 * new name, without having to compile it again
 *
 * You should not remove the path before the
 * name of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */

main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
