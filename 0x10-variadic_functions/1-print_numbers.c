#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be separated between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(numbers, unsigned int));
	if (i < (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
