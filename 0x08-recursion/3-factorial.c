#include "main.h"
/**
 *factorial - return factorial of a number
 *@n: given number
 *Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
	return(-1);
	}
	if (n == 0)
	{
	return(0);
	}
	return factorial(n) = n * factorial(n - 1);
}
