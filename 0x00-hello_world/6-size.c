#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long elong;
	long long longlong;
	float efloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(elong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(efloat));

	return (0);
}
