#include "main.h"
#include <stdlib.h>

/**
 * *array_range - array
 * @min: minimum
 * @max: maximum
 * Return: Null or pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	return (NULL);
	size = (max - min) + 1;

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
	return (NULL);

	int i = 0;

	while (min <= max)
	{
	ptr[i] = min;
	i++;
	min++;
	}
	return (ptr);
}
