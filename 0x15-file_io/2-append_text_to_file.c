#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fa;

	if (filename == NULL)
		return (-1);
	fa = fopen(filename, "a");
	if (fa == NULL)
		return (-1);
	if (text_content != NULL)
		fwrite(text_content, sizeof(char), strlen(text_content), fa);
	fclose(fa);
	return (1);
}

