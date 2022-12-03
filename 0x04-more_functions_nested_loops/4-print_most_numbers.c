#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints the numbers
 */
void print_most_numbers(void)
{
	char c;
	int i;

	i = 0;
	for (c = 48; c < 58; i++)
	{
		if (c == 50)
			c++;
		else if (c == 52)
			c++;
		else
		putchar(c);
		c++;
	}
	putchar('\n');
}
