#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *buff_cr(char *file);
void fl_cl(int fd);

/**
 * buff_cr - allocates a buffer with 1024 bytes
 * @file: buffer allocation source
 *
 * Return: new buffer pointer
 */
char *buff_cr(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * fl_cl - closes file descriptors
 * @fd: file descriptor
 *
 * Return: void
 */
void fl_cl(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of a file to another file
 * @argc: arguments count
 * @argv: argument pointers
 *
 * Description:	exit codes:	97 when argument count isn't correct
 *							98 if file_from doesn't exist or read permisson isn't granted
 *							99 if file_to can't be created or write permission isn't granted
 *							100 if files descriptors can't be closed
 *
 * Return: 0 if it succeeds
 */
int main(int argc, char *argv[])
{
	int src, dest, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buff_cr(argv[2]);
	src = open(argv[1], O_RDONLY);
	rd = read(src, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(dest, buff, rd);
		if (dest == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buff);
	fl_cl(src);
	fl_cl(dest);
	return (0);
}
