#include "main.h"
/**
 * _puts - prints string
 * @str: string to be printed
 * Return: Always 0
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
	_putchar(str[l]);
	str++;
	}
	_putchar('\n');
}
