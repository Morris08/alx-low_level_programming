#include "main.h"
#include <sdlib.h>

/**
 * *_realloc - realloc
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: NULL or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int j;

	if (new_size == old_size)
	return (ptr);

	if (new_size == 0 && ptr)
	{
	free (ptr);
	return (NULL);
	}

	if (!ptr)
	return (malloc(new_size));
	ptr1 = malloc(new_size);

	if (!ptr1)
	return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
	for (j = 0; j < new_size; j++)
	ptr[j] = old_ptr[j];
	}

	if (new_size > old_size)
	{
	for (j = 0; j < old_size; j++)
	ptr[j] = old_ptr[j];
	}
	free (ptr);
	return (ptr1);
}
