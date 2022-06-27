// Write a C program to print truth table of NOT Operation

#include <stdio.h>

int main() {
  int a;
  printf("A\tA'\n");
  for(a=0;a<=1;a++)
      printf("%d\t%d\n",a,!a);
  return 0;
}
