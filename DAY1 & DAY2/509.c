
#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, c;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        printf("%d", b);
    }

    return 0;
}
