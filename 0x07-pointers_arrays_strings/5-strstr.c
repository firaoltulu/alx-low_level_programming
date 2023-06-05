#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: Char pointer that points to the variable
 * that is passed to this function
 * @needle: Char pointer that points to the variable
 * that is passed to this function
 * Return: Char pointer the locate substring.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *eight = haystack;
char *nine = needle;

while (*eight == *nine && *nine != '\0')
{
eight++;
nine++;
}

if (*nine == '\0')
return (haystack);
}

return (0);
}
