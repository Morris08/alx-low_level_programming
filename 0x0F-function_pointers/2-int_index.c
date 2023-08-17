#include "function_poins.h"
#include <stdlib.h>
/**
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL 
