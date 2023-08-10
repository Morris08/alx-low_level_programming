#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - merge 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: Null or result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	unsigned int len1 = 0;

	while (s1[len1] != '\0')
	len1++;

	unsigned int len2 = 0;

	while (s2[len2] != '\0')
	len2++;

	if (n >= len2)
	n = len2;
	char *result = (char *)malloc(len1 + n + 1);

	if (*result == NULL)
	{
	return (NULL);
	}
	unsigned int i;

	for (i = 0; i < len1; i++)
	{
	result[len1 + i] = s2[i];
	}
	result[len1 + n] = '\0';
	return (result);
}
