#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array - creates arrays
 * @size: length of array
 * @c: character to be printed
 * return: Null or character
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if ( arr == NULL)
	{
	return (NULL);
	}
	i = 0;

	while (i < size)
	{
	arr[i] = c;
	i++;
	}
	return (arr);
}
