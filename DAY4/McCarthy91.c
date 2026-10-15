#include<stdio.h>
int mcCarthy(int n){
    if(n>100){
        return n-10;
    }
    return mcCarthy(mcCarthy(n+11));
}

int main(){
    int n = 91;
    printf("Result = %d", mcCarthy(n));
    return 0;
}
