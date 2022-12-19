// butterfly
#include <stdio.h>

void bf(int x){
    int i,j=0;
    int bosluk=x;
    int yildiz=1;
    
    for(i=0; i<x; i++) //sutun
    {
            for(j=0; j<yildiz; j++)//yildiz
        {
                printf("*");
        } 
            for(j=0; j<bosluk; j++) //bosluk
        {
                printf(" ");
        } 
            for(j=0; j<yildiz; j++) //yildiz
        {
                printf("*");
        }
    printf("\n");
    if(i>= x/2){
        bosluk+=2;
        yildiz--;
    }
    else{
        bosluk-=2;
        yildiz++;
    }
    
}
}

int main()
{
    int n;
    printf("%s", "n="); scanf("%d", &n);
    
    while(n%2==0){
        printf("%s", "gecersiz sayi girdin slk. n="); scanf("%d", &n);
    }
    
    bf(n);
    
}
