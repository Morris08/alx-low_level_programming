#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize variable
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	;
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
