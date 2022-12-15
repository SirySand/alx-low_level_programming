#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - writes a string and a trailing newline to stdout.
 * @s: string to be printed
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	*s = getchar();

	if (*s != '\n')
	{
		putchar('s');
	}
	else
	{
		putchar('\n');
	}
}
