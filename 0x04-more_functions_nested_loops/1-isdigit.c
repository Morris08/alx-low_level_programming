#include "main.h"
/**
 * _isdigit - Entry point
 *
 * @c: charcters
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (c == i)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
}
