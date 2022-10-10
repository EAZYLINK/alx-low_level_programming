#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @struct dog: struct to be initialized
 * @d: pointer
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 * Return: returns void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}