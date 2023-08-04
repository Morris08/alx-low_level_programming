#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc <= 0)
	printf("Error\n");
	return (1);

	for (i = 0; i < argc; i++)
	result += argv[i];
	printf("%d\n", result);
	return (0);
}
