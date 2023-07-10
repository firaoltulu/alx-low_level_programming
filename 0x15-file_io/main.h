#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void firaol_print_version(unsigned char *two);
void firaol_print_abi(unsigned char *two);
void firaol_print_type(unsigned int e_type, unsigned char *two);
void firaol_print_entry(unsigned long int e_entry, unsigned char *two);
void firaol_print_class(unsigned char *one);

#endif
