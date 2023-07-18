#include "main.h"
/**
 * print_sign- Entry point
 *
 * Return: 0 when n is equal -1 when n is less and 1 when n is greater
 *
 * @n: The character in ASCII code
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar (+);
	return (1);
	}
	else if (n < 0)
	{
	_putchar (-);
	return (-1);
	}
	else
	{
	_putchar (0);
	return (0);
	}
	_putchar('\n')
}
