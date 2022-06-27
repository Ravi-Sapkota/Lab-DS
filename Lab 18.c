//WAP to compute the a^n number using a recursion.

#include<stdio.h>

int value(int base, int power){
  if(power>1){
    return base*power(base,--power);
  }else{
    return base;
  }
}

int main(){
  int a=3;
  int n=5;
  printf("The value of %d^%d is %d.",a,n,value(a,n));
  return 0;
}
