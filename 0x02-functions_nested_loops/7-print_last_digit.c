#include "main.h"
/**
 * print_last_digit- Entry point
 *
 *@number: inputs the number
 *
 * Return: last value digit
 */

int print_last_digit(int number)
{
	int last_digit;

	last_digit = number % 10;

	if (last_digit < 0)
	{
	_putchar (-1 + 48);
	return (-last_digit);
	}
	else
	{
	_putchar (1 + 48);
	return (last_digit);
	}
}
