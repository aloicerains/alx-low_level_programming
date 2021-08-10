/**
 * main - program entry point
 * @argc: argument counter
 * @argv: argument pointer
 *
 * Return: 0 on sucess, and (97 : 100) failure
 */
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	void exit_fd(int fd);
	void copy(int sourcefd, int destfd, char *sf, char *df);
	int sourcefd, destfd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	destfd = open(argv[2], O_WRONLY | O_TRUNC);
	if (destfd < 0)
	{
		destfd = open(argv[2], O_WRONLY | O_CREAT, 0664);
		if (destfd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	sourcefd = open(argv[1], O_RDONLY);
	if (sourcefd < 0)
	{
		exit_fd(destfd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	copy(sourcefd, destfd, argv[1], argv[2]);
	exit_fd(sourcefd);
	exit_fd(destfd);
	return (0);
}
/**
 * exit_fd - function closes the file descriptors
 * @fd: function descriptor argument
 *
 * Return: nothing.
 */
void exit_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy - function copies content of source to destination
 * @sourcefd: function descriptor to source file
 * @destfd: function descriptor to destination file
 * @sf: source file pointer
 * @df: destination file pointer
 *
 * Return: nothing
 */
void copy(int sourcefd, int destfd, char *sf, char *df)
{
	int i, c;
	int buf_size = 1024;
	void *buf = malloc(sizeof(char) * buf_size);

	if (buf != NULL)
	{
		for (i = 0; ; i += buf_size)
		{
			c = read(sourcefd, buf, buf_size);
			if (c == 0)
				break;
			if (c < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sf);
				exit(98);
			}
			if (write(destfd, buf, c) != c)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", df);
				exit(99);
			}
		}
		free(buf);
	}
}
