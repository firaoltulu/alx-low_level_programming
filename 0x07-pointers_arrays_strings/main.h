#ifndef MAIN_H
#define MAIN_H

char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
unsigned int _strspn(char *s, char *accept);
void print_diagsums(int *a, int size);
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_memcpy(char *dest, char *src, unsigned int n);
void set_string(char **s, char *to);

#endif
