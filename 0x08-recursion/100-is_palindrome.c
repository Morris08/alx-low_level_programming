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
	if (len == 0 || *s != s[len - 1])
	return (0);
	return (is_palind_recursive(s, 0, len - 1));
}
