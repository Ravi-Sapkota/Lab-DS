// Write a C program to implement Boolean matrix operation such as join, product

#include <stdio.h>

#define N 2

void operation(int A[N][N], int B[N][N]){
    int i,j;
    puts("Join matrix:");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("%d ",A[i][j] | B[i][j]);
        puts("");
    }
    
    puts("\nProduct matrix:");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("%d ",A[i][j] & B[i][j]);
        puts("");
    }
}

int main(){
  int A[N][N] = {{1,0},{0,1}};
  int B[N][N] = {{1,1},{0,0}};
  operation(A,B);
  return 0;
}  
