#include "main.h"
/**
 * jack_bauer- Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
	_putchar ("%d:%d", hour, minute);
	}
	_putchar ('\n');
	}
return (0);
}
