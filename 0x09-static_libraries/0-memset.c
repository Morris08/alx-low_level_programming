#include "main.h"
/**
 *_memset - fill block of mem with specific value
 *@s: starting address to be filled
 *@b: the desired valued
 *@n: number of bytes changed
 *Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
