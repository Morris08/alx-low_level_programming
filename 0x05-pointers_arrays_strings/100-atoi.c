#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: always 0
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s == ' ' || *s == '\t' || *s == '\n')
	s++;

	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
	s++;
	}

	while (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
	if (result > (INT_MAX - digit) / 10)
	{
	return ((sign == 1) ? INT_MAX : INT_MIN);
	}
	result = result * 10 + digit;
	s++;
	}

return (result * sign);
}
