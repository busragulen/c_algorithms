//rhombus pattern
#include <stdio.h>

int x,y;
int main() {
    
    printf("enter 2 values\n");
    scanf("%d", &y); // vertical length
    scanf("%d", &x); // horizontal length 
    printf("\n\r");
    
    //nested loops
    for(int j=1; j<=y; j++){
        //building spaces with a for-loop
        for(int i=1; i<=y-j; i++){
            printf(" ");
        }
        //building the pattern with a for-loop
        for(int i=1; i<=x; i++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
