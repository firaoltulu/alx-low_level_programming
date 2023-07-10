#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * firaol_print_type - THis Function Prints
 * the type of an ELF header.
 * @e_type: int that represent The ELF type.
 * @two: A char pointer that points
 * to an array containing the ELF class.
 * Return: Nothing (void).
 */
void firaol_print_type(unsigned int e_type, unsigned char *two)
{
    if (two[EI_DATA] == ELFDATA2MSB)
        e_type >>= 8;

    printf(" Type:                              ");

    switch (e_type)
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
        printf("<unknown: %x>\n", e_type);
    }
}
