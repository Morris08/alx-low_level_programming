#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	int number;
	int limit = 1024;
	int sum = 0;

	for (number = 0; number < limit; number++)
	{
	if (number % 3 == 0 || number % 5 == 0)
	{
	sum += number;
	}
	}
	printf("%d\n", sum);
return 0;
}
