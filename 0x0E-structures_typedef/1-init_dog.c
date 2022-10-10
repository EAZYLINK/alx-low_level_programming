#include "dog.h"

/**
 * init_dog - Initializes a variable
 * @d: pointer
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 * Return: returns void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
