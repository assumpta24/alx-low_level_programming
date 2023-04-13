#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>


#define BUFFER_SIZE 1024

/**
 * main - demo program
 * @argv: arguments to be entered
 * @argc: counter arguments
 *
 * Return: 0 on success or exit with code
 */
int main(int argc, char **argv)
{
	unsigned int n_write, n_read;
	char buffer[BUFFER_SIZE];
	int file_from, file_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	while (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	file_from = open(argv[1], O_RDONLY);
	while (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from);
	exit(99);
	while((n_read = read(file_from, buffer, BUFFER_SIZE)))
		 n_write = write(file_to, buffer, n_read);
	if (n_write != n_read)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from);
	close(file_to);
	exit(99);
	if (n_read > 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	close(file_from);
		close(file_to);
		exit(98);
	while (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to);
		exit(100);
		if (close(file_to) == -1)

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

