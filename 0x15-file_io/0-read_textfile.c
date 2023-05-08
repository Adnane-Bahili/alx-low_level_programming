#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: files's name
 * @letters: letters to read and print count
 *
 * Return:	count of letters it could read and print
 *		0
 *			if the file can't be opened or read
 *			if filename == NULL
 *			if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl_dir;
	ssize_t r_len, w_len;
	char *buff;

	if (!filename)
		return (0);

	fl_dir = open(filename, O_RDONLY);

	if (fl_dir == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		close(fl_dir);
		return (0);
	}

	r_len = read(fl_dir, buff, letters);

	close(fl_dir);
	if (r_len == -1)
	{
		free(buff);
		return (0);
	}

	w_len = write(STDOUT_FILENO, buff, r_len);

	free(buff);
	if (r_len != w_len)
		return (0);
	return (w_len);
}
