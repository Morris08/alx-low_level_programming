#include <stdio.h>
/**
 * print_fibonacci- display fibonacci
 *
 * @n: fibonacci number
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_fibonacci(int n)
{
	int first = 1, second = 2, next;
	int i;

	printf("%d, %d", first, second);

	for (i = 2; i < n; i++)
	{
	next = first + second;

	printf("%d, ", next);

	first = second;
	second = next;
	}

	printf("\n");
}

int main(void)
{
	int n = 98;

	print_fibonacci(n);

return (0);
}
