#include "main.h"
/**
 * _memcpy - copies mem area
 * @dest: mem where is stored
 * @src: mem where is copied
 * @n: number of bytes
 * Return: copied mem
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
	dest[r] = src[r];
	n--;
	}
	return (dest);
}
