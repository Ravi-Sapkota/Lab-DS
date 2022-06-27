// Write a C program to find gcd of any two numbers using Euclidian algorithms and prime factorization method

#include <stdio.h>

void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int GCD(int a,int b){
  int r;
  while(b>0){
    r=a%b;
    a=b;
    b=r;
  }
  return a;
}

int main(){
  int a, b;
  printf("Enter any two numbers greater then 0: ");
  scanf("%d%d",&a,&b);
  if(b>a){
    swap(&a,&b);
  }
  int gcd=GCD(a,b);
  printf("The gcd of %d and %d is %d.",a,b,gcd);
}