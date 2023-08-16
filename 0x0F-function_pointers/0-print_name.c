#include "main.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name to be printed
 * @f: pointer to name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
