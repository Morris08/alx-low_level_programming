#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - string
 * @str: string
 * Return: duplicate or NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}
	size_t length = strlen(str);
	char *duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
	return (NULL);
	}
	strcpy(duplicate, str);

	return (duplicate);
}
