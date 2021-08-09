/**
 * create_file - function creates a new file
 * @filename: pointer to name of file to be created
 * @text_content: Pointer to content of the text file created
 *
 * Return: 1 on success, and -1 on failure
 */
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}

	if (filename)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd != -1)
		{
			if (text_content == NULL)
			{
				write(fd, " ", 1);
			}
			write(fd, text_content, i);
			return (1);
		}
	}
	return (-1);
}

