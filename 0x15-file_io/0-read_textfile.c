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

	if (filename != NULL)
	{
		num = write(1, filename, letters);
		{
			return (num);
		}
	}
	return (0);
}
