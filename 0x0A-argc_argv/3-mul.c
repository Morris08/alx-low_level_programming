#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	mul = i * j;
	if (argc <= 2)
	{
	printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
