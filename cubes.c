//program that finds the cubes of numbers up to the input value
#include <stdio.h>

int i; 
int i3;

int cube(i){
    i3=(i+1)*(i+1)*(i+1);
    printf("%d\n", i3);
}

int main() {
    printf("enter a number\n"); scanf("%d", &i);

    while(i){ 
        i--;
        cube(i);
    }
    
    return 0;
}
