#include "main.h"
/**
 *_print_rev_recursion - print reverse string
 *@s: string
 *return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recurion(s + 1);
	_putchar(*s);
	}
}
