#include<stdio.h>
#include<stdlib.h>

int main(){

    int x,y; int ratio;
    printf("2 values:");
    scanf("%d", &x);
    scanf("%d", &y);

    ratio=x;
    x=y;
    y=ratio;
            
    printf("seql %d -- %d", x,y);
    return 0;
}
