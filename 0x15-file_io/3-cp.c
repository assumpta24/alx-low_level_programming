#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

/**
 * check_argments - to check number of arguments
 * @argc: number of arguments
 *
 * Return: Nothing
 */
void check_arguments(int argc)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE);
	exit(97);
}

/**
 * open_files - opens the files' source and destination
 * @argv: arguments
 * @file_from: pointer to source file
 * @file_to: pointer to destination
 *
 * Return: Nothing
 */
void open_files(char *argv[], int *file_from, int *file_to)
{
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	*file_from = open(argv[1], O_RDONLY);
	if (*file_from == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		exit(98);
	}
	*file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (*file_to == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
		close(*file_from);
		exit(99);
	}
}
/**
 * copy_file -  copies the content of a file to another file
 * @file_from: source file
 * @file_to: destination file
 * @argv: arguments
 *
 * Return: Nothing
 */
void copy_file(int file_from, int file_to, char *argv[])
{
	int read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (read_bytes == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
	close(file_from);
	close(file_to);
	exit(98);
}
/**
 * main - entry point of program
 * @argc: number of argiments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	check_arguments(argc);
	open_files(argv, &file_from, &file_to);
	copy_file(file_from, file_to, argv);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, CLOSE_ERROR, file_from);
	close(file_to);
	exit(100);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, CLOSE_ERROR, file_to);
	exit(100);
	return (0);
}
