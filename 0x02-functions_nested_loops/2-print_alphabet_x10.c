#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10- Entry
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0, alpha;

	while (i < 10)
	{
	alpha = 'a';

	while (alpha <= 'z')
	{
	_putchar (alpha++);
	}
	_putchar (i++);
	}
	_putchar ('\n');
}
