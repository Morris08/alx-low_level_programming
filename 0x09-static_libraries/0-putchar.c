#include "main.h"
/**
 *_putchar - prints character
 *@c: character printed
 *Return: 1
 *
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
