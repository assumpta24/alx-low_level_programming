#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the function
 * @letters: the number of letters it should read and print
 *
 * Return: Always number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fa;
	ssize_t n_read, n_written;
	char *temp;

	if (filename == NULL)
		return (0);
	fa = open(filename, O_RDONLY);
	if (fa == 1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);
	n_read = read(fa, temp, letters);
	if (n_read == -1)
		return (0);
	n_written = write(STDOUT_FILENO, temp, n_read);

	if (n_written == -1 || n_written != n_read)
		return (0);
	close(fa);
	free(temp);
	return (n_written);
}

