#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: ....
 * @text_content: ...
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	ssize_t f_wr;

	while (filename == NULL)
	{
		return (-1);
	}

	fa = open(filename, O_WRONLY | O_APPEND);
	if (fa == -1)
	{
		return (-1);
	}
	while (text_content != NULL)
	{
		f_wr = write(fa, text_content, strlen(text_content));
	}
	if (f_wr == -1)
	{
		close(fa);
		return (-1);
	}
	else
	{
		close(fa);
		return (-1);
	}
	return (0);
}

