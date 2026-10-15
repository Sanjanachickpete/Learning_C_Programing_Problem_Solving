#include <stdio.h>

int main()
{
    int n, original, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("%d is a Palindrome\n", original);
    }
    else
    {
        printf("%d is Not a Palindrome\n", original);
    }

    return 0;
}