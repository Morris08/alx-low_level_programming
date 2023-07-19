#include <stdio.h>
/**
 * main - Entry point
 * fibonacci_even_sum - prints sum
 *
 * @limit: limit of numbers
 *
 * Return: Always 0
 */

void fibonacci_even_sum(int limit)
{
	int first = 1, second = 2, next;
	long long sum = 2;

	while (1)
	{
	next = first + second;

	if (next > limit)
	break;

	if (next % 2 == 0)

	sum += next;
	first = second;
	second = next;
	}
	printf("%lld\n", sum);
}

int main(void)
{
	int limit = 4000000;

	fibonacci_even_sum(limit);
return (0);
}
