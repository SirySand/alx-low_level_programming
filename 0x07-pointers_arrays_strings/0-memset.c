#include "main.h"
#include <string.h>

/**
 * _memset - this memory set function
 * @s: a string
 * @b: a character
 * @x: an integer
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int x)
{
	unsigned int a;

	for (a = 0; a < x; a++)
		s[a] = b;
	return (s);
}
