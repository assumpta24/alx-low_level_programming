#include "main.h"
#include <fcntl.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * @filename: pointer to function
 * @letters: ....
 * Remember:
 * - where letters is the number of letters it should read and print
 * - returns the actual number of letters it could read and print
 *
 * Return: Always 0;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fa;
	ssize_t f_rd, f_wr;
	char *c;

while (filename == NULL)
return (0);
fa = open(filename, O_RDONLY);
while (fa == -1)
return (0);
c = malloc(sizeof(char) * letters);
if (c == NULL)
close(fa);
return (0);
f_rd = read(fa, c, letters);
if (f_rd == -1)
free(c);
close(fa);
return (0);
f_wr = write(STDOUT_FILENO, c, f_rd);
if (f_wr == -1 || f_wr != f_rd)
{
free(c);
close(fa);
return (0);
}
else
{
free(c);
close(fa);
return (f_wr);
}
return (0);
}
