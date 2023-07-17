#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    // Print the alphabet from 'a' to 'm'
    char current_char = 'a';
    while (current_char <= 'm') {
        putchar(current_char);
        current_char++;
    }

    // Print the alphabet from 'n' to 'z'
    current_char = 'n';
    while (current_char <= 'z') {
        putchar(current_char);
        current_char++;
    }

    // Print a newline character
    putchar('\n');

    return 0;
}

