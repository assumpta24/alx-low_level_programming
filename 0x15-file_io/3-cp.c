#include "main.h"

/**
 * close_file - close a opened file
 * @FD_value: file descriptor.
 *
 * Return_ nothing.
 */
void close_file(int FD_value)
{
	if (close(FD_value) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", FD_value);
		exit(100);
	}
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
	int inputFD_value, outputFD_value, nBytes_read, nBytes_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputFD_value = open(argv[1], O_RDONLY);
	if (inputFD_value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	outputFD_value = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFD_value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nBytes_read = read(inputFD_value, buffer, BUFFER_SIZE)) > 0)
	{
		nBytes_write = write(outputFD_value, buffer, nBytes_read);
		if (nBytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	if (nBytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	close_file(inputFD_value);
	close_file(outputFD_value);
	return (0);
}

