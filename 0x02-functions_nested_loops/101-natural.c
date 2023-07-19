#include <stdio.h>

int main()
{
    int limit = 1024;
    int sum = 0;

    for (int number = 0; number < limit; number++)
    {
        if (number % 3 == 0 || number % 5 == 0)
        {
            sum += number;
        }
    }

    printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

    return 0;
}

