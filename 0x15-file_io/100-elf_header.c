#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "100-elf.h"
#include "main.h"

void firaol_print_data(unsigned char *two);
void firaol_check_elf(unsigned char *two);
void firaol_close_elf(int elf);
void firaol_print_osabi(unsigned char *two);
void firaol_print_magic(unsigned char *two);

/**
 * firaol_check_elf - This Function Checks if a file
 * is an ELF file.
 * @two: A Char pointer that points to
 * an array containing the ELF magic numbers.
 *
 * Return: Nothing (void).
 */
void firaol_check_elf(unsigned char *two)
{
	int one;

	for (one = 0; one < 4; one++)
	{
		if (two[one] != 127 &&
				two[one] != 'E' &&
				two[one] != 'L' &&
				two[one] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * firaol_print_magic - this Function Prints
 * the magic numbers of an ELF header.
 * @two: A char pointer that points
 * to an array containing the ELF magic numbers.
 *
 * Return: Nothing (void).
 */
void firaol_print_magic(unsigned char *two)
{
	int one;

	printf(" Magic:   ");

	for (one = 0; one < EI_NIDENT; one++)
	{
		printf("%02x", two[one]);

		if (one == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * firaol_print_data - this Function Prints
 * the data of an ELF header.
 * @two: A char pointer that points
 * to an array containing the ELF class.
 */
void firaol_print_data(unsigned char *two)
{
	printf(" Data:                              ");

	switch (two[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", two[EI_CLASS]);
	}
}

/**
 * main - this function Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *F
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *three;
	int one, two;

	one = open(argv[1], O_RDONLY);
	if (one == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	else
	{
		three = malloc(sizeof(Elf64_Ehdr));
		if (three == NULL)
		{
			firaol_close_elf(one);
			dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
			exit(98);
		}
		else
		{
			two = read(one, three, sizeof(Elf64_Ehdr));
			if (two == -1)
			{
				free(three);
				firaol_close_elf(one);
				dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
				exit(98);
			}
			else
			{
				firaol_check_elf(three->e_ident);
				printf("ELF Header:\n");
				firaol_print_magic(three->e_ident);
				firaol_print_class(three->e_ident);
				firaol_print_data(three->e_ident);
				firaol_print_version(three->e_ident);
				firaol_print_osabi(three->e_ident);
				firaol_print_abi(three->e_ident);
				firaol_print_type(three->e_type, three->e_ident);
				firaol_print_entry(three->e_entry, three->e_ident);

				free(three);
				firaol_close_elf(one);

			}
		}
	}
	return (0);
}

/**
 * firaol_print_osabi - This Function Prints
 * the OS/ABI of an ELF header.
 * @two: A char pointer that points
 * to an array containing the ELF version.
 */
void firaol_print_osabi(unsigned char *two)
{
	printf(" OS/ABI:                            ");

	switch (two[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", two[EI_OSABI]);
	}
}

/**
 * firaol_close_elf - This Function Closes an ELF file.
 * @elf: Int that represents The file
 * descriptor of the ELF file.
 *
 */

void firaol_close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
