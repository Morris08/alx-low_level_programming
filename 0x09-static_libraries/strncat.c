#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input
 * @n: input
 * Return: dest
 */
char 8_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
