
#include <stdio.h>

int main()
{
    int n, h, i;
    int bunches[100000];
    int low = 1, high = 0;

    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        scanf("%d", &bunches[i]);

        if (bunches[i] > high)
            high = bunches[i];
    }







    scanf("%d", &h);

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        long long hours = 0;

        for (i = 0; i < n; i++)
            hours += (bunches[i] + (long long)mid - 1) / mid;

        if (hours <= h)
            high = mid;
        else
            low = mid + 1;
    }

    printf("%d\n", low);

    return 0;
}
