#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char current_char = '0';

	while (current_char <= '9')
		putchar(current_char++);

	current_char = 'a';

	while (current_char <= 'f')
		putchar(current_char++);

putchar('\n');

return (0);
}
