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
	int n;

	n = number % 10;

	if (n < 0)
	{
	_putchar (-1 + 48);
	return (-n);
	}
	else
	{
	_putchar (1 + 48);
	return (n);
	}
}
