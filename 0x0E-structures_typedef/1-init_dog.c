#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intialiazes a dog
 * @d: struct dog
 * @name: character
 * @age: float
 * @owner: character
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
