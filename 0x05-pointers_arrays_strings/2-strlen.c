#include "main.h"
/**
 * int_strlen - prints size
 *
 * @s: string
 *
 * return: always 0
 */

void int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	s++;
	len++;
	}
	return (len);
}
