
#include <stdio.h>

int main()
{
    int n, i, j, count = 0;
    int nums[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
