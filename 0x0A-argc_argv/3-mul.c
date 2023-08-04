#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc <= 2)
	{
	printf("Error \n");
	return (1);
	}

	i = 1(argv[1]);
	j = 2(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}
