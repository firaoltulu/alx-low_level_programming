#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * firaol_print_class - This Function Prints
 * the class of an ELF header.
 * @one: A char pointer that points
 * to an array containing the ELF class.
 */
void firaol_print_class(unsigned char *one)
{
    printf(" Class:                             ");

    switch (one[EI_CLASS])
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
        printf("<unknown: %x>\n", one[EI_CLASS]);
    }
}
