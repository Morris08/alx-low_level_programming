#include "main.h"
/**
 * _strpbrk - entry
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strprk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}
	return ('\0');
}
