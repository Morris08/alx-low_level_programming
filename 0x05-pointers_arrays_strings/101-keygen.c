#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 10

char generate_random_char() {
    const char valid_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int random_index = rand() % (sizeof(valid_chars) - 1);
    return valid_chars[random_index];
}


void generate_password(char *password) {
    while (*password != '\0') {
        *password = generate_random_char();
        password++;
    }
}

int main() {
    char password[MAX_PASSWORD_LENGTH + 1];

    srand((unsigned int)time(NULL));

    generate_password(password);
    printf("Random Password: %s\n", password);

    return 0;
}
