#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * firaol_print_entry - this Function Prints
 * the entry point of an ELF header.
 * @e_entry: int that represent
 * The address of the ELF entry point.
 * @two: A char pointer that points
 * to an array containing the ELF class.
 * Return: Nothing (void).
 */
void firaol_print_entry(unsigned long int e_entry, unsigned char *two)
{
    printf(" Entry point address:               ");

    if (two[EI_DATA] == ELFDATA2MSB)
    {
        e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
        e_entry = (e_entry << 16) | (e_entry >> 16);
    }

    if (two[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)e_entry);

    else
        printf("%#lx\n", e_entry);
}
