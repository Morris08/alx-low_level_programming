#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Null or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *j;

	j = (dog_t *)malloc(sizeof(dog_t));
	if (j == NULL)
	return (NULL);
	nlen = olen = 0;
	while (name[nlen++])
	;
	while (owner[olen++])
	;
	j->name = malloc(nlen * sizeof(j->name));
	if (j->name == NULL)
	{
	free(j);
	return (NULL);
	}
	for (i = 0; i <= nlen; i++)
	j->name[i] = name[i];
	j->age = age;
	j->owner = malloc(olen * sizeof(j->owner));

	if (j->owner == NULL)
	{
	free(j->name);
	free(j);
	return (NULL);
	}
	for (i = 0; i <= olen; i++)
	j->owner[i] = owner[i];
	return (j);
}

