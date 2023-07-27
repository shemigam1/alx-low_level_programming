#include "main.h"
#include <elf.h>

/**
 * display_error - show error
 * @message: str
 */
void display_error(const char* message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_elf_header_info - display elf info
 * @elf_header: char
 * Return: void
 */
void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\nClass: %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data: %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Others");
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type: %s\n", (elf_header->e_type == ET_EXEC) ? "Executable" :
                         (elf_header->e_type == ET_DYN) ? "Shared Object" :
                         (elf_header->e_type == ET_REL) ? "Relocatable" : "Unknown");

	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main - entry point
 * @argc: int
 * @argv: char**
 * Return: int
 */

int main(int argc, char* argv[])
{
	Elf64_Ehdr elf_header;
	const char *elf_filename = argv[1];
	int fd = open(elf_filename, O_RDONLY);

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	if (fd == -1)
	{
		display_error("Failed to open the ELF file");
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		close(fd);
		display_error("Failed to read the ELF header");
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		display_error("Not an ELF file");
	}

	display_elf_header_info(&elf_header);
	close(fd);
	return 0;
}
