/**
 * read_textfile - function reads the input text file
 * @filename: pointer to file name
 * @letters: number of letters that should be printed
 *
 * Return: Actual number of letters read and printed
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int fd, c;
	char *buf = NULL;

	if (filename != NULL)
	{
		fd = open(filename, O_RDWR);
		buf = malloc(sizeof(buf) * letters);
		if (buf == NULL || fd == -1)
			return (free(buf), 0);
		c = read(fd, buf, letters);
		if (c == -1)
			return (0);
		close(fd);

		num = write(STDOUT_FILENO, buf, letters);
		if (num != -1)
		{
			return (num);
		}
		free(buf);
	}
	return (0);
}
