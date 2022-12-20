// basic recursive function usage

#include <stdio.h>
#include <stdlib.h>

int summation(int num){
  
  int sum=0;
  
  if(num==0){
      return;
  }
  else{
     sum=num+ summation(num-1);
     return sum; 
  }
}

int main(){
  printf("%d\n", summation(7));
}
