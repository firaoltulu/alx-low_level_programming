#ifndef FIRAOL_ELF_H
#define FIRAOL_ELF_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void firaol_print_version(unsigned char *two);
void firaol_print_abi(unsigned char *two);
void firaol_print_type(unsigned int e_type, unsigned char *two);
void firaol_print_entry(unsigned long int e_entry, unsigned char *two);
void firaol_print_class(unsigned char *one);

#endif
