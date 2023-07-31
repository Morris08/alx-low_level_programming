#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: starting address of the memory to be filled
 *@b: value
 *@n: number of bytes to be changed
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
	s[i] = b;
	i++;
	n--;
	}
	return (s);
}
