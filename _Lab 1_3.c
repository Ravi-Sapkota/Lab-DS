// Write a C program to find ceiling and floor value of a variable or expression

#include<stdio.h>
#include<math.h>

int main(){
  float a=5.4;
  printf("The floor value of %f is %0.2f.\n",a,floor(a));
  printf("The celi value of %f is %0.2f.\n",a,ceil(a));
}