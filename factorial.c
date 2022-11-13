// program that prints the factorial of user's input
#include <stdio.h>

int input;
int fact=1;

int main() {
    
    printf("enter a number\n");
    scanf("%d", &input);
    
    for(int j=1; j<=input; j++){
       fact=fact*j; 
    }
      printf("%d", fact);
    
    return 0;
}
