#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argumnt vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	}
	return (0);
}