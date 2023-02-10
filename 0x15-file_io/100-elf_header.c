#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(Elf64_Ehdr *header);
void print_magic(Elf64_Ehdr *header);
void print_class(Elf64_Ehdr *header);
void print_data(Elf64_Ehdr *header);
void print_version(Elf64_Ehdr *header);
void print_abi(Elf64_Ehdr *header);
void print_osabi(Elf64_Ehdr *header);
void print_type(unsigned int e_type, Elf64_Ehdr *header);
void print_entry(unsigned long int e_entry, Elf64_Ehdr *header);

/**
 * check_elf - Checks if a file is an ELF file.
 * @header: A pointer to the ELF header structure.
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(Elf64_Ehdr *header)
{
	if (header->e_ident[0] != 0x7f ||
			header->e_ident[1] != 'E' ||
			header->e_ident[2] != 'L' ||
			header->e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 *
 * @header: A pointer to the ELF header structure.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(Elf64_Ehdr *header)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", header->e_ident[index]);
		if (index == EI_NIDENT - 1)
				printf("\n");
			else
				printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @header: A pointer to the ELF header structure.
 */
