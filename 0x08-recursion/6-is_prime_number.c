#include "main.h"
/**
 *sqtRecursive - square root
 *@n: number
 *@m: number
 *Return: square root
 */
int sqtRecursive(int n, int m)
{
	if (n <= 0)
	return (-1);
	if (n * n == m)
	return (n);
	return (sqtRecursive(n - 1, m));
}
/**
 *_sqrt_recursion - square root
 *@n: number
 *Return: square root
 *
 *
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	return (1);
	return (sqtRecursive(n / 2, n));
}
/**
 *is_prime_number - check if number is prime
 *@n: number
 *Return: 1 or 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
	return (0);
	if (_sqrt_recursion(n) == -1)
	return (1);
	return (_sqrt_recursion9(n));
}
