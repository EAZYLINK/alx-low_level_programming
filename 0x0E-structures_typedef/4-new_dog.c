#include "dog.h"

/**
 * _strlen - returns length of string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
int count = 0;
while (str)
count++;
return (count);
}

/**
 * _strcpy - copies a string
 * @dest: where string is copied into
 * @src: where string is copied from
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *bingo;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
bingo = malloc(sizeof(dog_t));
if (bingo == NULL)
return (NULL);
bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (bingo->name == NULL)
{
free(bingo);
return (NULL);
}
bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (bingo->owner == NULL)
{
free(bingo->name);
free(bingo);
return (NULL);
}
bingo->name = _strcpy(bingo->name, name);
bingo->age = age;
bingo->owner = _strcpy(bingo->owner, owner);
return (bingo);
}
