#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - Create a function that creates a file.
 * @filename: pointer to function
 * @text_content: ....
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fa;
	ssize_t f_wr;

	while (filename == NULL)
		return (-1);

	fa = open(filename, O_CREAT | O_WRONLY | O_TRUNC);

	while (fa == -1)
		return (-1);
	if (text_content != NULL)
	{
		f_wr = write(fa, text_content, strlen(text_content));
		if (f_wr == -1)
		{
			close(fa);
				return (-1);
		}
	}
	close(fa);
	return (1);
}
