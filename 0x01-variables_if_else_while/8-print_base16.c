#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char current_char = '0';

    // Print numbers from '0' to '9'
    while (current_char <= '9')
    {
        putchar(current_char);
        current_char++;
    }

    current_char = 'a';

    // Print lowercase letters from 'a' to 'f'
    while (current_char <= 'f')
    {
        putchar(current_char);
        current_char++;
    }

    // Print a newline character
    putchar('\n');

    return 0;
}

