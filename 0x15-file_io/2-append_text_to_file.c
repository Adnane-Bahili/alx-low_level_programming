#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename pointer
 * @text_content: string to append
 *
 * Return:	1 if it succeeds, or if the file exists && text_content == NULL
 *		-1
 *			if it fails
 *			if filename == NULL
 *			if file doesn't exist
 *			if write permission is not granted
 */
int append_text_to_file(const char *filename, char *text_content)
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

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, l);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
