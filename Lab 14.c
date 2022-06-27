// Write a C program to print truth table of IMPLICATION Operation

#include <stdio.h>

int implication(int x, int y) {
  if(x==1 && y==0){
      return 0;
  }else{
      return 1;
  }
}
int main() {
  int a,b;
  printf("A\tB\tA->B\n");
  for(a=0;a<=1;a++)
    for(b=0;b<=1;b++)
      printf("%d\t%d\t %d\n",a,b,implication(a,b));
  return 0;
}
