#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all args
 * @ac: argument count
 * @av: argument vector
 * Return: Null or pointer
 */
char *argstostr(int ac, char **av)
{
	char *duplicate;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
	return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	size++;
	size++;
	}
	size++;
	duplicate = malloc(size * sizeof(char));
	if (duplicate == NULL)
	return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	duplicate[k++] = av[i][j];
	}
	duplicate[k++] = '\n';
	}
	duplicate[k] = '\0';
	return (duplicate);
}
