#include "main.h"
/**
 * _puts - prints string
 * @str: string to be printed
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*[str + 1] != '\0')
	{
	_putchar(str[1]);
	str++;
	}
	_putchar('\n');
}
