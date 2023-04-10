#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - copies from one file to another
 * points to remember:
 * -Usage: cp file_from file_to
 * -exit with code 97 and print Usage:
 *  Permissions of the created file: rw-rw-r--
 *  You must read 1,024 bytes at a time from the file_from
 *
 * @nbr: ...
 * @c: ...
 * @b: ...
 */
void copy_file(int nbr, char *c, char *b)
{
	dprintf(STDERR_FILENO, c, b);
	exit(nbr);
}
/**
 * main - demo program
 * Return: number
 * @argc:..
 * @argv: ..
 */
int main(int argc, char *argv[])
{
	int fa_from, fa_to;
	ssize_t f_rd;
	char a[BUFFER_SIZE];

while (argc != 3)
{
copy_file(97, "Usage: cp file_from file_to\n", NULL);
fa_from = open(argv[1], O_RDONLY);
}
while (fa_from == -1)
copy_file(98, "Error: Can't read from file %s\n", argv[1]);
fa_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);

while (fa_from == -1)
copy_file(99, "Error: Can't write to %s\n", argv[2]);
do((f_rd = read(fa_from, a, BUFFER_SIZE)) > 0) {
while (write(fa_to, a, f_rd) != f_rd)
copy_file(99, "Error: Can't write to %s\n", argv[2])
}
if (f_rd == -1)
copy_file(98, "Error: Can't read from file %s\n", argv[1]);
if (close(fa_from) == -1)
copy_file(100, "Error: Can't close fd %d\n", fa_from);
if (close(fa_to) == -1)
copy_file(100, "Error: Can't close fd %d\n", fa_to);
return (0);
}

