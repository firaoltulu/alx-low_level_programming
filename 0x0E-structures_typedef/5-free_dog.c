#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - THis Function frees memory
 * allocated for a struct dog.
 * @d: struct pointer that points to
 * struct dog to free.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}