// WAP to compute the nth fibonacci number using a recursive function.

#include<stdio.h>

int fibonacchi(int first,int second,int position){
  static int third;
  third = first+second;
  first=second;
  second=third;
  --position;
  if(position==0){
    return third;
  }else{
      return fibonacchi(first, second, position);
  }
}

int main(){
  // series is 0 1 1 2 3 5 8 13 21 34 55 
  int position = 10;
  printf("The %dth fibonacchi number is %d.",position, fibonacchi(0, 1, position-2));
  return 0;
}