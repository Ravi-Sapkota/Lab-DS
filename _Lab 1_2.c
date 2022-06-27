// Write a C program to find union, inersection, difference and complement of two sets using bit string representation

#include<stdio.h>

#define getSize(x) (sizeof(x)/sizeof(x[0]))

int set_U[]={0,1,2,3,4,5,6,7,8,9};
int set_A[]={1,2,3,4,5};
int set_B[]={0,2,4,6,8};

int U=getSize(set_U);
int A=getSize(set_A);
int B=getSize(set_B);

int bit_U[]={1,1,1,1,1,1,1,1,1,1};
int bit_A[]={0,0,0,0,0,0,0,0,0,0};
int bit_B[]={0,0,0,0,0,0,0,0,0,0};

int i, j;

void UNION();
void INTERSECTION();
void DIFFERENCE();
void COMPLEMENT();
void BITSTRING();

int main(){
  BITSTRING();
  UNION();
  INTERSECTION();
  DIFFERENCE();
   COMPLEMENT();
  return 0;
}
void BITSTRING(){
  int x=0, y=0;
  for(i=0;i<U;i++){
    if(set_A[x]==set_U[i]){
      bit_A[i]=1;
      x++;
    }
    if(set_B[y]==set_U[i]){
      bit_B[i]=1;
      y++;
    }
  }
}
void UNION(){
  puts("\nThe union of A and B in bit string is:");
  for(i=0;i<U;i++){
    printf("%d ",bit_A[i] || bit_B[i]);
  }
}
void INTERSECTION(){
  puts("\nThe intresection of A and B in bit string is:");
  for(i=0;i<U;i++){
    printf("%d ",bit_A[i] && bit_B[i]);
  }
}
void DIFFERENCE(){
    puts("\nThe difference A-B in bit string is:");
    for(i=0;i<U;i++){
        printf("%d ",bit_A[i] && !bit_B[i]);
    }
}
void COMPLEMENT(){
    puts("\nThe complement U-A in bit string is:");
    for(i=0;i<U;i++){
        printf("%d ",!bit_A[i]);
    }
}