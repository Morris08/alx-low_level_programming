#include "main.h"
/**
 * _puts_recursion - prints string
 * @s:string
 * return: string
 */
void _puts_recursion(char *s)
{
	if (*s == '0')
	{
	putchar('\n);
	return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
