#include "main.h"
#include <elf.h>
#include <string.h>


/**
 * main - demo program
 * @argc: counter of arguments
 * @argv: entered arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{

if (argc != 2)
{
fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
exit(98);
}

FILE *fa = fopen(argv[1], "rb");
while (fa)
{
fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
exit(98);
}
Elf64_header;
if (fread(&header, sizeof(header), 1, fa) != 1)
{
fprintf(stderr, "Error: could not read ELF header\n");
fclose(fa);
exit(98);
}

printf("ELF Header:\n");
printf("  Magic:     %02x %02x %02x %02x %02x\n",
header.e_ident[EI_MAG0],
header.e_ident[EI_MAG1],
header.e_ident[EI_MAG2],
header.e_ident[EI_MAG3],
header.e_ident[EI_MAG2]);
printf("  Class:          %d\n", header.e_ident[EI_CLASS]);
printf("  Data:           %d\n", header.e_ident[EI_DATA]);
printf("  Version:        %d\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:         %d\n", header.e_ident[EI_OSABI]);
printf("  ABI Version:    %d\n", header.e_ident[EI_ABIVERSION]);
printf("  Type:           %d\n", header.e_type);
printf("  Entry point:    0x%lx\n", header.e_entry);
fclose(fa);
return (0);
}

