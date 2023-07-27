#include "main.h"
/**
 * _putchar - print
 *
 * print_char - print
 *
 * print_number_recursive - print
 *
 *
 * print_number - print number
 *
 * @c: character
 * @n: integer
 *
 */

void _putchar(char c);

void print_char(char c)
{
	_putchar(c);
}


void print_number_recursive(int n)
{
	if (n < 0)
	{
	print_char('-');
	n = -n;
	}
	if (n / 10 != 0)
	{
	print_number_recursive(n / 10);
	}

	print_char(n % 10 + '0');
}

void print_number(int n)
{
	if (n == 0)
	{
	print_char('0');
	}
	else
	{
	print_number_recursive(n);
	}
}
