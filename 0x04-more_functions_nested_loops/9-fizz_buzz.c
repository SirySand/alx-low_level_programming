#include "main.h"
#include <stdio.h>

/**
 * main - a program that print numbers from 1 to 100
 *
 * Return:0 Always (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
				putchar('\040');
			}
			printf("Fizz");
			putchar('\040');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar('\040');
		}
		else
		{
			printf("%d", i);
			putchar('\040');
		}
	}
	return (0);
}
