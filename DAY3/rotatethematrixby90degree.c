
#include <stdio.h>

int main()
{
    int a[3][3],i,j,temp;

    printf("enter elements of the matrix:\n");

    for (i=0; i<3;i++)
    {
        for (j=0; j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<3;i++)
    {
        for (j =i +1;j<3;j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3 /2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][2-j];
            a[i][2-j] = temp;
        }
    }

    printf("Rotated matrix:\n");

    for (i=0;i<3;i++)
    {
        for (j =0;j<3;j++)
        {
         printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
