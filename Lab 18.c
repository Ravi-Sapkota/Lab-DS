//WAP to compute the a^n number using a recursion.

#include<stdio.h>

int value(int base, int power){
  if(power>1){
    return base*value(base,--power);
  }else if(power==0){
      return 1;
  }else{
    return base;
  }
}

int main(){
  int a=3;
  int n=0;
  printf("The value of %d^%d is %d.",a,n,value(a,n));
  return 0;
}
