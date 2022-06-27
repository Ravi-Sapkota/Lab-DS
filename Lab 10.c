// Write a C program to implement Boolean matrix operation such as join, product

#include <stdio.h>

#define N 3

int A[N][N];
int B[N][N];
int i, j;

void operation(int A[N][N], int B[N][N]){
    puts("Join matrix:");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",A[i][j] | B[i][j]);
        }
        puts("");
    }
    puts("Product matrix:");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",A[i][j] & B[i][j]);
        }
        puts("");
    }
}

int main(){
  puts("Enter the first boolean matrix row-wise here:");
  for(i=0;i<N;i++){
      for(j=0;j<N;j++){
          scanf("%d",&A[i][j]);
      }
  }
  puts("Enter the second boolean matrix row-wise here:");
  for(i=0;i<N;i++){
      for(j=0;j<N;j++){
          scanf("%d",&B[i][j]);
      }
  }
  operation(A,B);
  return 0;
}  
