#include "main.h"

/**
 * get_endianness - this functions checks
 * if a machine is little or big endian.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
    unsigned int one = 1;
    char *two = (char *)&one;

    return (*two);
}
