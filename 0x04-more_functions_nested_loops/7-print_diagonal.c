#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that prints diagonal lines
 * @n : number of times that the character is printed
 */
void print_diagonal(int n)
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
		putchar('\'');
		}
		putchar('\n');
	}
}
