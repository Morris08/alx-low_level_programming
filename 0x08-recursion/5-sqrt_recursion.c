#include "main.h"
/**
 *sqtRecursive - square root
 *@start: initial number
 *@end: last number
 *@m: number
 *Return: result
 *
 */
int sqtRecursive(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
	mid = start + (end - start) / 2;
	if (mid * mid == m)
	return (mid);
	if (mid * mid > m)
	return (sqtRecursive(start, mid - 1, m));
	if (mid * mid < m)
	return (sqtRecursive(mid + 1, end, m));
	}
	return (-1);
}
/**
 *_sqrt_recursion - natural square root
 *@n: number
 *Return: square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (n);
	return (sqtRecursive(2, n, n));
}
