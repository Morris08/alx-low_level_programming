#include "main.h"
/**
 * _puts - prints string
 * @str: string to be printed
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	putchar('\n');
}
