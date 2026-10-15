
#include <stdio.h>

int main()
{
    int n, i, total = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        total += (i - 1) / 7 + 1 + (i - 1) % 7;
    }

    printf("%d", total);

    return 0;
}
