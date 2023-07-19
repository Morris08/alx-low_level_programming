#include "main.h"
/**
 * times_table- Entry point
 *
 * Repturn: void
 */

void times_table(void)
{
	int row, column, product;

	for (row = 0; row < 10; row++)
	{
	for (column = 0; column < 10; column++)
	{
	product = (row * column);
	{
	_putchar (row);
	_putchar ('\n');
	}
	_putchar (column);
	_putchar ('\n');
	}
	_putchar (product);
	_putchar ('\n');
	}
}
