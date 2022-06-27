// Write a C program to print truth table of OR Operation

#include <stdio.h>

int main() {
  int a,b;
  printf("A\tB\tA|B\n");
  for(a=0;a<=1;a++)
    for(b=0;b<=1;b++)
      printf("%d\t%d\t %d\n",a,b,a || b);
  return 0;
}
