#include "main.h"
/**
 * print_line - print a line on terminal
 *
 * @n: number of times _ is printed
 */

void print_line(int n)
{
	if (n > 0)
	{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar (95);
	}
	}
	_putchar ('\n');
}
