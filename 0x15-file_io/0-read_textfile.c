#include "main.h"
#include <stdio.h>

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * ssize_t read_textfile - function read a text and print it to standard POSIX output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t letters;
	const char *filename;

	size_t *filename = (int *)malloc(letters*(sizeof(int)));

	/* open */
	fd = open("textfile.txt", O_RDONLY);

	if(fd == -1)
	{
		return (0);
	}
	if(filename == NULL)
	{
		return (0);
	}

	/* read */
	
	close(fd);
