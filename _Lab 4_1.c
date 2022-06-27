// WAP to compute the factorial of a number using a recursive function.

#include<stdio.h>

int fact(int x){
  if(x>1){
    return x*fact(x-1);
  }else{
    return 1;
  }
}

int main(){
  int x=5;
  printf("The factorial of %d is %d",x,fact(x));
  return 0;
} 