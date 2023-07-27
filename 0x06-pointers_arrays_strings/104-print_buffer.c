#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_buffer - prints buffer
 * @b: string
 * @size: integer
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
	printf("\n");
	return;
	}

	for (i = 0; i < size; i += 10)
	{
	printf("%08x ", i);

	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
	printf("%02x ", (unsigned char)b[i + j]);
	else
	printf("   ");
	}

	printf(" ");
	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
	{
	char ch = b[i + j];

	printf("%c", isprint(ch) ? ch : '.');
	}
	else
	{
	printf(" ");
	}
	}

	printf("\n");
	}
}
