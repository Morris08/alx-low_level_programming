#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - outputs the details
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	;
	else
	{
	if (d->name != NULL)
	printf("name: %s\n", d->name);
	else
	printf("name: (nil)\n");
	printf("age: %1f\n", d->age);

	if (d->owner != NULL)
	printf("owner: %s\n", d->owner);
	else
	printf("owner: (nil)\n");
	}
}
