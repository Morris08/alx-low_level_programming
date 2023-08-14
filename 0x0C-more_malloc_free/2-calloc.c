#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - calloc
 * @nmemb: mem
 * @size: size
 * Return: NUL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *mem;

	if (nmemb == 0 || size == 0)
	return (NULL);
	mem = malloc(nmemb * size);

	if (mem == NULL)
	return (NULL);
	for (j = 0; j < nmemb * size; j++)
	*(mem + j) = 0;
	return ((void *)mem);
}
