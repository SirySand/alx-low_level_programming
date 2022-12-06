#include "main.h"
#include <stdio.h>

/*
 * more_numbers - function that prints numbers x times
 */
void more_numbers(void)
{
	int i;

	for(i = 0; i < 15; i++) 
	{
		while (i < 10)
		{
			print_numbers();
		}
			putchar((i/10)+'0');
			putchar((i%10)+'0');
	}
}
int main(void)
{
	int j;

	for(j = 0; j < 10; j++)
	{
		more_numbers();
		putchar('\n');
	}
}
