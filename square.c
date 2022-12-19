//square pattern
#include <stdio.h>

int side;

int main() {
    
    printf("side of the square=");
    scanf("%d", &side);

    for(int i=0; i<side; i++){
        printf("*");
        for(int j=1; j<side; j++)
        printf("*");
        printf("\n");
    }
    
    return 0;
}
