#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: Char Pointer That points
 * to the name of the dog.
 * @age: Integer that represent the age
 * of the dog.
 * @owner: Char Pointer That points to
 * the owner name of the dog.
 *
 * Description: Structure used to represent
 * a dog.
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif