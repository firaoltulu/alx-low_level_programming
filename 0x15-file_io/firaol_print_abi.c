#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * firaol_print_abi - this function Prints
 * the ABI version of an ELF header.
 * @two: A char pointer that points
 * to an array containing the ELF
 * ABI version.
 */
void firaol_print_abi(unsigned char *two)
{
    printf(" ABI Version:                       %d\n",
           two[EI_ABIVERSION]);
}
