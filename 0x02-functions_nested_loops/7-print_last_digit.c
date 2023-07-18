#include "main.h"
/**
 * print_last_digit- Entry point
 *
 * Return: last value digit
 */

int print_last_digit(int)
{
	int last_digit, number;

	last_digit = number % 10;
	_putchar (last_digit);
return (last_digit);
}
