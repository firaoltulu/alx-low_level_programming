#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This Function Read
 * text file print to STDOUT.
 * @filename: char pointer that points to
 * text file being read.
 * @letters: number of letters to be read.
 * Return: w-actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *one;
    ssize_t two;
    ssize_t three;
    ssize_t four;

    two = open(filename, O_RDONLY);
    if (two == -1)
    {
        return (0);
    }
    else
    {
        one = malloc(sizeof(char) * letters);
        four = read(two, one, letters);
        three = write(STDOUT_FILENO, one, four);

        free(one);
        close(two);
        return (three);
    }
}