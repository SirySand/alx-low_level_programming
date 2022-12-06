#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that prints a straight line
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
		putchar('_');
		}
		putchar('\n');
	}
}
