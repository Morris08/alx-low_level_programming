#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer
 * @str: string
 * Return: duplicate or NULL
 */
char *_strdup(char *str)
{
	int i, j;

	if (str == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	i++;

	char *duplicate = malloc(i * sizeof(str));

	if (duplicate == NULL)
	{
	return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
	duplicate[j] = str[j];
	j++;
	}

	return (duplicate);
}
