// program that prints if the input is prime or not
#include <stdio.h>

int input;
int prime;

int main() {
    
    printf("enter a number\n");
    scanf("%d", &input);
    
    for(int i=2; i<input; i++){
        if (input%i==0)
            prime++;
    }
        if (prime==0){
            printf("this is a prime number: %d", input);
        }
        else{
            printf("this isn't a prime number: %d", input);
    }
    
    return 0;
}
