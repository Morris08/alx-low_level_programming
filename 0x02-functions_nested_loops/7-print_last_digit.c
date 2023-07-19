#include "main.h"
/**
 * print_last_digit- Entry point
 *
 *@n: inputs the number
 *
 * Return: last value digit
 */

int print_last_digit(int number)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
	_putchar(-l + 48);
	return (-l);
	}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
