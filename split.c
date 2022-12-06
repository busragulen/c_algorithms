#include <stdio.h>
#include <stdlib.h>

int lenght(char array[]){
    int i=0;
    while(array[i]!='\0'){
        i++;
    }
    return i;
}

void split(char array[300], char parameter, char destination[300][300]){
    int counter_x=0;
    int counter_y=0;
    int i=0;
    for(i=0; i<300; i++){
        if(array[i]==parameter){
            counter_y++;
            counter_x=0;
        }
        else{
            destination[counter_y][counter_x]=array[i];
            counter_x++;
        }
    }
}
char dest[300][300];
int main() {
    split("A,B,C,D,E", ',', dest);
    printf("%s", dest[3]);
    return 0;
}