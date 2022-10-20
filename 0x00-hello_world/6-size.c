#include <stdio.h>
/**
 * main - print the sizes of various types of data
 *
 * Return: 0
 */
int main(void)
{
	float f;
	char d;
	long long int c;
	long int b;
	int a;

	printf("size iof a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of a int: %lu byte(S)\n", (unsigned long)sizeof(a));
	return (0);
}
