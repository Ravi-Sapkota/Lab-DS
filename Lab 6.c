// Write a C program to generate 10 random numbers using linear congruential method

#include<stdio.h>

int main(){
  int initial, mod, c1, c1;
  printf("Enter the upper limit of the random numbers : ");
  scanf("%d",&mod);
  printf("Enter the first value of random numbers : ");
  scanf("%d",&initial);
  int i,x;
  for(i=0;i<10;i++){
    initial=(52*initial+3)%mod;
    printf("%d ",initial);
  }
  return 0;
}
