#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fa;
	ssize_t n_written = 0;

	if (!filename)
		return (-1);
	fa = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fa == -1)
		return (-1);

	if (text_content)
		n_written = write(fa, text_content, strlen(text_content));
	close(fa);
	return (n_written == -1 ? -1 : 1);
}

