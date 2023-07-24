#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generate_random_char()
{
    const char valid_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int random_index = rand() % (sizeof(valid_chars) - 1);
    return valid_chars[random_index];
}

void generate_password(char *password, int length)
{
	int i = 0;

    while (i < length) {
        password[i] = generate_random_char();
	i++;
    }
    password[length] = '\0';
}

int main()
{


    srand((unsigned int)time(NULL));

    generate_password(password);
    printf("Random Password: %s\n", password);

    return 0;
}
