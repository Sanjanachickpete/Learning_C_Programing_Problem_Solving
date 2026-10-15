#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Not a power of 3");
    }
    else
    {
        while (n % 3 == 0)
        {
            n = n / 3;
        }

        if (n == 1)
        {
            printf("Power of 3");
        }
        else
        {
            printf("Not a power of 3");
        }
    }

    return 0;
}