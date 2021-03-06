/**
 * append_text_to_file - function appends text to a file
 * @filename: pointer to name of file to append text
 * @text_content: Pointer to content of the text file to add
 *
 * Return: 1 on success, and -1 on failure
 */
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}

	if (filename)
	{
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd != -1)
		{
			write(fd, text_content, i);
			return (1);
		}
	}
	return (-1);
}

