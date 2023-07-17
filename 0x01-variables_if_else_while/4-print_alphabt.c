#include <stdio.h>

int main(void)
{
	char current_char = 'a';

	while (current_char <= 'z')
		if (current_char != 'q' && current_char != 'e')
			putchar(current_char++);
	putchar('n\');
	return (0);
