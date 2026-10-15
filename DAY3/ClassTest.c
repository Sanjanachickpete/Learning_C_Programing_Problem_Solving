#include<stdio.h>
int main(){
    int top =0;
    int bottom=2;
    int right=2;
    int left =0;
    int width = right - left;
    int height = bottom - top;
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}