#include "main.h"
/**
 * times_table- Entry point
 *
 * Repturn: void
 */

void times_table(void)
{
	int row, column, product;
	int count = 0;

	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	product = (row * column);

	if (product < 10)
	{
	_putchar (' ');
	_putchar (product + '0');
	count += 2;
	}
	else
	{
	_putchar ((product / 10) + '0');
	_putchar ((product % 10) + '0');
	count += 2;
	}
	if (column != 9)
	{
	_putchar (',');
	_putchar (' ');
	count += 2;
	}
	if (count >= 380);
	return;
	}
	_putchar ('\n');
	}
}
