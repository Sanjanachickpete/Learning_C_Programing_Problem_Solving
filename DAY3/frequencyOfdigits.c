
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num, *digit, *count;
    int rem;

    num = (int *)malloc(sizeof(int));
    digit = (int *)malloc(sizeof(int));
    count = (int *)malloc(sizeof(int));

    *count = 0;

    printf("Enter a number: ");
    scanf("%d", num);

    printf("Enter digit to find frequency: ");
    scanf("%d", digit);

    int n = abs(*num);

    if (n == 0 && *digit == 0)
        *count = 1;

    while (n != 0)
    {
        rem = n % 10;

        if (rem == *digit)
            (*count)++;

        n = n / 10;
    }

    printf("Frequency of %d = %d\n", *digit, *count);

    free(num);
    free(digit);
    free(count);

    return 0;
}
