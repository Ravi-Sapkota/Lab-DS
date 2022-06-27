//WAP to compute the x^n number using a recursive function.

#include<stdio.h>

int value(int base, int power){
  if(power>1){
    return base*power(base,--power);
  }else{
    return base;
  }
}

int main(){
  int base=3;
  int power=5;
  printf("The value of %d^%d is %d.",base,power,value(base,power));
  return 0;
}