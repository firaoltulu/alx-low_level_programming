#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * firaol_print_version - this Function Prints
 * the version of an ELF header.
 * @two: A char pointer that points
 * to an array containing the ELF version.
 *
 */
void firaol_print_version(unsigned char *two)
{
    printf(" Version:                           %d", two[EI_VERSION]);

    switch (two[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
        break;
    }
}
