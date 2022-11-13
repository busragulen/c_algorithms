//fibonacci sequence
#include <stdio.h>

int value;
int fwd;
int fwd2;
int first=0;
int second=1;

int seql(value){
    fwd= first + second;
    printf("%d ", fwd);
    first = second;
    second = fwd; 
}
int main() {
    
    printf("set the boundry number\n");
    scanf("%d", &value);
    printf("%d %d ", first, second);
    
    for(int i=3; i<=value; i++){
        seql(value);
    }
    return 0;
}
