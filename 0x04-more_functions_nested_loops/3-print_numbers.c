#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers from 0 to 9
*/
void print_numbers(void)
{
	char c;
	int i;

	i = 0;
	for (c = 48; c < 58; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
