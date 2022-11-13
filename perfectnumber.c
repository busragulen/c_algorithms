// perfect number finder
#include <stdio.h>

int sum=0;
int input;
int divided[];

void perfect(int input){
	int counter=0;
	int i=0;
    for(i=2; i<=input; i++){
        int mod = input % i;
        if(mod==0){
            divided[counter] = input/i ;
            counter++;
        }
    }
    for( i=0; i<counter; i++){
    	printf("%d\n",divided[i]);
        sum = sum + divided[i];
    }   
}

int main(){

    printf("enter a value");
    scanf("%d", &input);

    perfect(input);

    if (sum==input){
    	  // 24=> 2,3,4,6,12,8
        printf("perfect number");
    }
    else{
        printf("not a perfect number");
    }
    return 0;
}
