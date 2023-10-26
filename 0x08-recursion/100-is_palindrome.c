#include "main.h"
/**
 *is_palindrome - checks string if is palindrome
 *@s: string
 *Return: result
 *
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length == 0 || *s != s[length - 1])
	return (0);
	return (is_palindrome(s, 0, length - 1));
}
