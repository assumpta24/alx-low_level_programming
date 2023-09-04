#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * check_error - .................
 * @output: ............
 * @file: ........
 * @code: ........
 *
 * Return: Nothing
 */
void check_error(char *output, char *file, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", output, file);
	exit(code);
}
/**
 * main - check entry point of  program
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		check_error("Usage: cp file_from file_to", "", 97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		check_error("Error: Can't read from file", argv[1], 98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		check_error("Error: Can't write to", argv[2], 99);
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
		if (write(file_to, buffer, bytes_read) != bytes_read)
			check_error("Error: Can't write to", argv[2], 99);
	if (bytes_read == -1)
		check_error("Error: Can't read from file", argv[1], 98);
	if (close(file_from) == -1)
		check_error("Error: Can't close fd", argv[1], 100);
	if (close(file_to) == -1)
		check_error("Error: Can't close fd", argv[2], 100);
	return (0);
}

