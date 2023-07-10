#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "100-elf.h"
#include "main.h"

<<<<<<< HEAD
void firaol_print_data(unsigned char *two);
void firaol_check_elf(unsigned char *two);
void firaol_close_elf(int elf);
void firaol_print_osabi(unsigned char *two);
void firaol_print_magic(unsigned char *two);
=======
void firaol_print_version(unsigned char *six);
void firaol_print_class(unsigned char *six);
void firaol_print_data(unsigned char *six);
void firaol_print_abi(unsigned char *six);
void firaol_print_osabi(unsigned char *six);
void firaol_check_elf(unsigned char *six);
void firaol_print_entry(unsigned long int seven, unsigned char *six);
void firaol_close_elf(int elf);
void firaol_print_magic(unsigned char *six);
void firaol_print_type(unsigned int seven, unsigned char *six);

/**
 * firaol_print_class - This Function Prints
 * the class of an ELF header.
 * @six: A char pointer that points
 * to an array containing the ELF class.
 * Return: Nothing (void)
 */
void firaol_print_class(unsigned char *six)
{
	printf("  Class:                             ");

	switch (six[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", six[EI_CLASS]);
	}
}
>>>>>>> 32c2aea3f94a3a5bf5c90dc286d625a8406ac3a9

/**
 * firaol_print_data - THis Function Prints
 * the data of an ELF header.
 * @six: A char pointer that points
 * to an array containing the ELF class.
 * Return: Nothing (void)
 */
void firaol_print_data(unsigned char *six)
{
	printf("  Data:                              ");

	switch (six[EI_DATA])
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
		printf("<unknown: %x>\n", six[EI_CLASS]);
	}
}

/**
 * firaol_print_version - this function
 * Prints the version of an ELF header.
 * @six: A char pointer that points
 * to an array containing the ELF version.
 * Return: Nothing (void)
 */
void firaol_print_version(unsigned char *six)
{
	printf("  Version:                           %d",
		   six[EI_VERSION]);

	switch (six[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * firaol_print_osabi - THis Function Prints
 * the OS/ABI of an ELF header.
 * @six: A char pointer that points
 * to an array containing the ELF version.
 * Return: Nothing (void)
 */
void firaol_print_osabi(unsigned char *six)
{
	printf("  OS/ABI:                            ");

	switch (six[EI_OSABI])
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
		printf("<unknown: %x>\n", six[EI_OSABI]);
	}
}

/**
<<<<<<< HEAD
 * main - this function Displays the information contained in the
=======
 * firaol_print_abi - THis Function Prints
 * the ABI version of an ELF header.
 * @six: A char pointer that points
 * to an array containing the ELF ABI version.
 * Return: Nothing (void)
 */
void firaol_print_abi(unsigned char *six)
{
	printf("  ABI Version:                       %d\n",
		   six[EI_ABIVERSION]);
}

/**
 * firaol_print_type - this function Prints
 * the type of an ELF header.
 * @seven: int that represent The ELF type.
 * @six: A char pointer that points to
 * an array containing the ELF class.
 * Return: Nothing (void)
 */
void firaol_print_type(unsigned int seven, unsigned char *six)
{
	if (six[EI_DATA] == ELFDATA2MSB)
		seven >>= 8;

	printf("  Type:                              ");

	switch (seven)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", seven);
	}
}

/**
 * firaol_print_entry - this function Prints
 * the entry point of an ELF header.
 * @seven: Int That Represent
 * The address of the ELF entry point.
 * @six: A char pointer that points
 * to an array containing the ELF class.
 * Return: Nothing (void)
 */

void firaol_print_entry(unsigned long int seven, unsigned char *six)
{
	printf("  Entry point address:               ");

	if (six[EI_DATA] == ELFDATA2MSB)
	{
		seven = ((seven << 8) & 0xFF00FF00) | ((seven >> 8) & 0xFF00FF);
		seven = (seven << 16) | (seven >> 16);
	}

	if (six[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)seven);

	else
		printf("%#lx\n", seven);
}

/**
 * firaol_close_elf - THis Function
 * Closes an ELF file.
 * @elf: int That Represent The
 * file descriptor of the ELF file.
 *
 * Return: Nothing (void)
 */
void firaol_close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - THis Function Displays
 * the information contained in the
>>>>>>> 32c2aea3f94a3a5bf5c90dc286d625a8406ac3a9
 * ELF header at the start of an ELF file.
 * @argc: Int that Represent The
 * number of arguments supplied to the program.
 * @argv: Char Pointer That points to
 * An array of pointers to the arguments.
 * Return: Int 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *one;
	int two, three;

	two = open(argv[1], O_RDONLY);
	if (two == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	else
	{
		one = malloc(sizeof(Elf64_Ehdr));
		if (one == NULL)
		{
			firaol_close_elf(two);
			dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
			exit(98);
		}
		else
		{
			three = read(two, one, sizeof(Elf64_Ehdr));
			if (three == -1)
			{
				free(one);
				firaol_close_elf(two);
				dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
				exit(98);
			}
			else
			{
				firaol_check_elf(one->e_ident);
				printf("ELF Header:\n");
<<<<<<< HEAD
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

=======
				firaol_print_magic(one->e_ident);
				firaol_print_class(one->e_ident);
				firaol_print_data(one->e_ident);
				firaol_print_version(one->e_ident);
				firaol_print_osabi(one->e_ident);
				firaol_print_abi(one->e_ident);
				firaol_print_type(one->e_type, one->e_ident);
				firaol_print_entry(one->e_entry, one->e_ident);
				free(one);
				firaol_close_elf(two);
>>>>>>> 32c2aea3f94a3a5bf5c90dc286d625a8406ac3a9
			}
		}
	}
	return (0);
}

/**
 * firaol_check_elf - THis Function Checks
 * if a file is an ELF file.
 * @six: A Char pointer that points
 * to an array containing the ELF magic numbers.
 * Return: Nothing (void)
 */
void firaol_check_elf(unsigned char *six)
{
	int one;

	for (one = 0; one < 4; one++)
	{
		if (six[one] != 127 &&
			six[one] != 'E' &&
			six[one] != 'L' &&
			six[one] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
<<<<<<< HEAD
 * firaol_close_elf - This Function Closes an ELF file.
 * @elf: Int that represents The file
 * descriptor of the ELF file.
 *
 */

void firaol_close_elf(int elf)
{
	if (close(elf) == -1)
=======
 * firaol_print_magic - This Function Prints
 * the magic numbers of an ELF header.
 * @six: A Char pointer THat Points
 * to an array containing the ELF magic numbers.
 * Return: Nothing (void)
 */
void firaol_print_magic(unsigned char *six)
{
	int one;

	printf("  Magic:   ");

	for (one = 0; one < EI_NIDENT; one++)
>>>>>>> 32c2aea3f94a3a5bf5c90dc286d625a8406ac3a9
	{
		printf("%02x", six[one]);

		if (one == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
