#include <stdlib.h>
#include <main.h>
/**
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *j;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
	ptr = malloc(new_size * sizeof(void *));
	if (ptr == NULL)
	return (NULL);
	return (ptr);
	}
	j = malloc(new_size * sizeof(char));
	if (j == NULL)
	return (NULL);
	i = 0;

	if (new_size > old_size)
	{
	while (i < old_size)
	{
	j[i] = ((char *) ptr)[i];
	i++;
	}
	free(ptr);
	return (j);
	}
	while (i < new_size)
	{
	j[i] = ((char *)ptr)[i];
	i++;
	}
	free(ptr);
	return (j);
}
