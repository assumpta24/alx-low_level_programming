#include "main.h"
#include <elf.h>

/**
 * print_magic - prints magic numbers
 * @e_ident: Elf header identity array
 *
 * Return: Nothing
 */
void print_magic(unsigned char *e_ident)
{
	ssize_t x;

	printf("  Magic:   ");
	for (x = 0; x < EI_NIDENT; x++)
		printf("%02x ", e_ident[x]);
	printf("\n");
}
/**
 * print_class - prints the class of an ELF header
 * @e_ident: ELF header identity array
 *
 * Return: Nothing
 */
void print_class(unsigned char *e_ident)
{
	 printf("  Class:                        ");
	 printf("%s\n", e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
}
/**
 * print_data - prints the data encoding
 * @e_ident: ELF header identity array
 *
 * Return: Nothing
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	printf("%s\n", e_ident[EI_DATA] == ELFDATA2MSB ?
			"2's complement, big endian" :
			"2's complement, little endian");
}
/**
 * main - displays the information contained in Elf header
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0;
 */
int main(int argc, char **argv)
{
	int fa;
	ssize_t x;

	Elf64_Ehdr header;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
	exit(98);

	fa = open(argv[1], O_RDONLY);
	if (fa == -1)
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
	exit(98);

	x = read(fa, &header, sizeof(header));
	if (x != sizeof(header))
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
	exit(98);


	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)

		dprintf(STDERR_FILENO, "Error: Not an ELF file - ");
	dprintf(STDERR_FILENO, "magic number does not match\n");
	exit(98);

	printf("ELF Header:\n");
	print_magic(header.e_ident);
	print_class(header.e_ident);
	print_data(header.e_ident);
	return (0);
}

