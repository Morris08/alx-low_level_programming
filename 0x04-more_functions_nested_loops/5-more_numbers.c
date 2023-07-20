#include "main.h"
/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int i =0, j;

	while (i < 11)
	{
	j = 0;

	for (j < 15)
	{
	_putchar (j++);
	}
	_putchar ('\n');
	i++;
	}
}
