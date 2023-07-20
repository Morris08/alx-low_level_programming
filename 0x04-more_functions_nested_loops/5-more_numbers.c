#include "main.h"
/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
	for (j = 0; j < 15; j++)
	{
	_putchar (i++);
	}
	_putchar ('\n');
	}
}
