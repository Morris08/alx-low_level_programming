#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker - checks if a given character no. or not
 * @a: character to check
 * Return: 1 if it is no. else 0
 */
int num_checker(char *a)
{
	int i, num, len;
	i = 0;
	num = 0;
	len = strlen(a);

	while (i < len)
	{
	if (a[i] < '0' || a[i] > 9)
	{
	return (-1);
	else
	num = num * 10 + (a[i] - '0');
	i++;
	}
	return (num);
	}
/**
 * main - entry point
 * @argc: argument character
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, result;
	result = 0;

	for (i = 1; i < argc; i++)
	{
	num = num_checker(argv[i]);
	if (num == -1)
	{
	printf("Error\n");
	return (1);
	}
	result += num;
	}
	printf("%d\n", result);
	return (0);
}
