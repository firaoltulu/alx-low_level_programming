#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: Char pointer that points to the variable
 * that is passed to this function is memory where is stored
 *@src: Char pointer that points to the variable
 * that is passed to this function is memory where is copied
 *@n: unsigned int that is passed to this function that
 * shows the number of bytes
 *
 *Return: Char pointer that shows copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int two = 0;
	int three = n;

	do {
		dest[two] = src[two];
		n--;
		two++;
	} while (two < three);

	return (dest);
}
