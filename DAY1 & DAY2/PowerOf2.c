#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <=0)
    {
        printf("Not a power of 2");
    }
    else
    {
        while (n % 2 == 0)
        {
            n = n / 2;
        }

        if (n == 1)
        {
            printf("Power of 2");
        }
        else
        {
            printf("Not a power of 2");
        }
    }

    return 0;
}