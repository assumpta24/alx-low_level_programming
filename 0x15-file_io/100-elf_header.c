#include "main.h"
#include <elf.h>
#include <string.h>

/**
 * main - check entry point of a program
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	FILE *filename = fopen(argv[1], "r");
	Elf64_Ehdr ehdr;

	if (argc != 2)
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
	exit(EXIT_FAILURE);
	if (!filename)
		fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
	exit(EXIT_FAILURE);
	if (fread(&ehdr, sizeof(ehdr), 1, filename) != 1)
		fprintf(stderr, "Error: could not read ELF header\n");
	fclose(filename);
	exit(EXIT_FAILURE);

	printf("ELF Header:\n");
	printf("  Magic:          %02x %02x %02x %02x %02x %02x %02x %02x\n",
	ehdr.e_ident[EI_MAG0], ehdr.e_ident[EI_MAG1], ehdr.e_ident[EI_MAG2],
	ehdr.e_ident[EI_MAG3], ehdr.e_ident[EI_MAG2], ehdr.e_ident[EI_MAG2],
	ehdr.e_ident[EI_MAG2], ehdr.e_ident[EI_MAG2]);
	printf("  Class:          %d\n", ehdr.e_ident[EI_CLASS]);
	printf("  Data:           %d\n", ehdr.e_ident[EI_DATA]);
	printf("  Version:        %d\n", ehdr.e_ident[EI_VERSION]);
	printf("  OS/ABI:         %d\n", ehdr.e_ident[EI_OSABI]);
	printf("  ABI Version:    %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type:           %d\n", ehdr.e_type);
	printf("  Entry point address:    0x%lx\n", ehdr.e_entry);
	fclose(filename);
	return (0);
}

