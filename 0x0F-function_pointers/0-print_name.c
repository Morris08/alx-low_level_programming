#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: name to be printed
 * @f: pointer to name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	return;
	f(name);
}
