#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - merges 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *duplicate;
	int i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	i++;
	while (s2[j] != '\0')
	j++;

	duplicate = malloc((i + j + 1) * sizeof(char));
	if (duplicate == NULL)
	return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
	duplicate[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
	duplicate[i] = s2[j];
	i++, j++;
	}
	duplicatep[i] = '\0';
	return (duplicate);
}
