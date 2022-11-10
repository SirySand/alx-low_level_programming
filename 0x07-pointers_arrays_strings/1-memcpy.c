#include "main.h"
#include <string.h>

/**
 * _memcpy - this is a copy of the memory
 * @dest: the destination memory
 * @src: the source memory
 * @x: number of bytes copied
 * Return: the string copied from source
 */

char *_memcpy(char *dest, char *src, unsigned int x)
{
	unsigned int a;

	for (a = 0; a < x; a++)

		dest[a] = src[a];

	return (dest);
}
