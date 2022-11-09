#include "main.h"
#include <stdio.h>

/**
 * foo - function to resolve the compiler warning about unused parameters
 * Description: This program must print is own name
 * @bar: second parameter of the function
 * Return: Always 0 (success)
 */
int foo(__attribute__((unused)) int bar)
{
	return (0);
}
/**
 * main - function to start the program
 * Description: starting point of the program
 * @argc: number of arguments in the code
 * @argv: arguments vectors
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n",  *argv[0]);
	return (0);
}
