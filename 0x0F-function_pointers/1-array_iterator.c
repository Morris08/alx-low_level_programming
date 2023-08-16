#include "main.h"
#include <stdio.h>
/**
 * array_iterator - execute a function
 * @array: array to be executed
 * @size: size of array
 * @action: call the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array != NULL && size > 0 && action != NULL)
	{
	for (j = 0; j < size; j++)
	action(array[j]);
	}
}

