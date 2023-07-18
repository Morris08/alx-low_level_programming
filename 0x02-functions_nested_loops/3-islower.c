#include "main.h"
#include <stdio.h>

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 *
 * @c: The character in ASCII code
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
