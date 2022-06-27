// Write a C program to print truth table of BIDIRECTIONAL Operation

#include <stdio.h>

int bidirectional(int x, int y) {
  if((x==1 && y== 1) || (x==0 && y == 0)){
      return 1;
  }else{
      return 0;
  }
}
int main() {
  int a,b;
  printf("A\tB\tA<->B\n");
  for(a=0;a<=1;a++)
    for(b=0;b<=1;b++)
      printf("%d\t%d\t  %d\n",a,b,bidirectional(a,b));
  return 0;
}
