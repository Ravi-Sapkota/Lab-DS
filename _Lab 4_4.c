//WAP to compute a product of two using a recursive function.

#include<stdio.h>

int product(int a, int b){
  if(a>1){
    return b+product(--a,b);
  }else{
    return b;
  }
}

int main(){
  int first_num=5;
  int second_num=6;
  printf("%d*%d=%d",first_num,second_num,product(first_num,second_num));
  return 0;
}