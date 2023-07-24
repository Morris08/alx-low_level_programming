#include "main.h"
/**
 * _strlen - prints size
 *
 * @s: string
 *
 * return: always length of string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	s++;
	len++;
	}
	return (len);
}
