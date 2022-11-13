// finds max and min values from an array
#include <stdio.h>
#include <stdlib.h>

int n,i,enb,enk;
int main(){
    
    int a[n];
    printf("n=");scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
   
    for(i=0;i<n;i++){
            enb=a[0];
            if(enb<a[i]){
            enb=a[i];
            }
    }
    for(i=0; i<n; i++){
            enk=a[0];
            if(enk>a[i]){
            enk=a[i];    
            } 
    }
    
    printf("girilen max deger= %d\n", enb);
    printf("girilen min deger= %d\n", enk);
    printf("aralarindaki fark= %d\n", enb-enk);
    
    // printf("%p--%d","A",(int)"A"); 
    // i'm trying something different here. this isnt about the code.

    return 0;
}
