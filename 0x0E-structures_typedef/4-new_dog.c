#include <stdlib.h>
#include "dog.h"

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

/**
 * _strlen - This Function returns the
 * length of a string.
 * @s: char pointer that points to the
 * string to evaluate.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
int two;

two = 0;
while (*s != '\0')
{
two++;
s++;
}

return (two);
}

/**
 * new_dog - THis Function creates a new dog
 * @name: Char Pointer THat points to the
 * new dog name.
 * @age: Float that represent the age of the dog.
 * @owner: char pointer that points to the new dog owner
 * name.
 *
 * Return: pointer to the new dog (Success), NULL for
 * failer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *one;
int two, three;

two = _strlen(name);
three = _strlen(owner);

one = malloc(sizeof(dog_t));
if (one == NULL)
{
return (NULL);
}
else
{
one->name = malloc(sizeof(char) * (two + 1));
if (one->name == NULL)
{
return (NULL);
}
else
{
one->owner = malloc(sizeof(char) * (three + 1));
if (one->owner == NULL)
{
return (NULL);
}
else
{
_strcpy(one->name, name);
_strcpy(one->owner, owner);
one->age = age;
return (one);
}
}
}
}