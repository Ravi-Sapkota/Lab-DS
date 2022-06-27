// Write a C program to find gcd of any two numbers using Euclidian algorithms and prime factorization method

#include <stdio.h>

int PRIME(int a, int b){
    int count= (a>b ? b : a);
    while(count>0){
        if(a%count==0 && b%count==0) break;
        --count;
    }
    return count;
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
  int a=44, b=55;
  printf("The gcd of %d and %d from Euclidian Algorithm is %d.\n",a,b,GCD(a,b));
  printf("The gcd of %d and %d from Prime Factorization is %d.\n",a,b,PRIME(a,b));
}
