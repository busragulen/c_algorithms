//fibonacci sequence but only input order printed.
#include <stdio.h>

int value;
int fwd;
int fwd2;
int first=0;
int second=1;

int seql(value){
    fwd= first + second;
    first = second;
    second = fwd;
}
int main() {
    
    printf("set the boundry number\n");
    scanf("%d", &value);
    
    for(int i=3; i<=value; i++){
        seql(value);
        if(i<value)
            continue;
        if(i=value)
            printf("%d", fwd);
            break;
    }
    return 0;
}
