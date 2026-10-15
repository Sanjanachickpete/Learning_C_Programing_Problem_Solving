
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr = arr;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
