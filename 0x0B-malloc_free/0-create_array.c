#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates arrays
 * @size: length of array
 * @c: character to be printed
 * return: Null or character
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return (NULL);
	}
	char *arr = (char *)malloc(size * sizeof(char));
	if ( arr == NULL)
	{
	return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
