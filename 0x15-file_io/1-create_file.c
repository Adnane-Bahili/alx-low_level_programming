#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: file to create name pointer
 * @text_content: string to write pointer
 *
 * Return:	1 if it succeeds
 *		-1 if it fails, or if filename == NULL
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int l = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, l);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
