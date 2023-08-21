#include "main.h"

/**
 * char *_strcpy - Function that copies the string pointed by src to dest
 * @dest: Integer array pointer that points to the variable
 * that is passed to this function used to copy to
 * @src: Integer array pointer that points to the variable
 * that is passed to this function used to copy from
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
int four = 0;
int five = 0;

while (*(src + four) != '\0')
{
four++;
}
do {
/* code */
dest[five] = src[five];
five++;
} while (five < four);

dest[four] = '\0';
return (dest);
}
