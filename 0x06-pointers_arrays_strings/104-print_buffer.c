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
	return (0);
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
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	int size = sizeof(buffer) - 1;

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, size);
return (0);
}
