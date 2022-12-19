//building a rectangle by user's input 
#include <stdio.h>

int longside;
int shortside;

int main(){
    
    printf("enter a input to build the long side of the rectangle:\n");
    scanf("%d", &longside);
    printf("enter a input to build the short side of the rectangle:\n");
    scanf("%d", &shortside);
    
    for(int i=1; i<=longside; i++){
        printf("*");
    }
    
    printf("\n");
    
    for(int i=2; i<shortside; i++){
        printf("*");
            for(int i=longside; i>2; i--){
                printf(" ");
            }
        printf("*\n");
    }

    for(int i=1; i<=longside; i++){
        printf("*");
    }
    return 0;
}
