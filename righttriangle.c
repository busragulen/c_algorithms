//right angled triangle
#include <stdio.h>

int main() {
    
    int x;
    int counter=0;
    
    printf("vector\n");
    scanf("%d", &x);
    
    for(int i=0; i<x; i++){
        for(int j=0; j<counter+1; j++){
            printf("*");
        }
        printf("\n");
        counter++;
    }
    return 0;
}
