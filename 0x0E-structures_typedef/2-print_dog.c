#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - THis Function prints
 * a struct dog that is passed to it.
 * @d: Pointer that represent the
 * struct dog to print
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}