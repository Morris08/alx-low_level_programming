#include <stdio.h>
/**
 * main - Entry point
 *
 * fibonacci - numbers
 *
 * @n: number of fibonacci
 *
 * Return: Always 0
 */

void fibonacci(int n)
{
	int first = 0, second = 1, next;
	int i;

	printf("First %d Fibonacci numbers:\n", n);
	printf("%d, %d", first, second);

	for (i = 2; i < n; i++)
	{
	next = first + second;
	printf(", %d", next);
	first = second;
	second = next;
	}

	printf("\n");
}

int main(void)
{
	int n = 50;

	fibonacci(n);
return (0);
}
