
#include <stdio.h>

int main()
{
    int n, matrix[100][100];
    int top, bottom, left, right;
    int i, j, num = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    top = 0;
    bottom = n - 1;
    left = 0;
    right = n - 1;

    while (top <= bottom && left <= right)
    {
        for (j = left; j <= right; j++)
            matrix[top][j] = num++;
        top++;

        for (i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        for (j = right; j >= left && top <= bottom; j--)
            matrix[bottom][j] = num++;
        bottom--;

        for (i = bottom; i >= top && left <= right; i--)
            matrix[i][left] = num++;
        left++;
    }

    printf("Spiral Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", matrix[i][j]);

        printf("\n");
    }

    return 0;
}
