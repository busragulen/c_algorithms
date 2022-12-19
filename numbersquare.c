// number square 1 
#include <stdlib.h>
#include <stdio.h>

int n,y=0;
int counter;

int main()
{
    printf("enter a value?\n");
    scanf("%d", &n);
    
    while(y==0){

    for(int j=0; j<n; j++){
        printf("%d\t", counter);
    }
    printf("\n");
    counter+=1;
    
    if(counter==n+1){
        break;
    }
    } 
        }
