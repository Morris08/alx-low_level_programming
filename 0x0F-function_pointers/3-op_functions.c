#include "3-calc.h"
/**
 * op_add - addition
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 * @a: first number
 * @b: second number
 * Return: -1 or division
 */
int op_div(int a, int b)
{
	if (b == 0)
	return (-1);
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: first number
 * @b: second number
 * Return: -1 or modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	return (-1);
	return (a % b);
}
