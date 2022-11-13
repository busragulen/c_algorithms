// program that prints evens up to the user's input
#include <stdio.h>

int main() {
    
    int i;
    printf("enter a value\n");
    scanf("%d", &i);
    
    for(int j=0; j<=i; j++){
        if(j%2==0)
            printf("%d\n", j);
        else
            continue;
    }

    return 0;
}
