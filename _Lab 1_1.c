// Write a C program to find union, inersection, difference, complement and Cartesian product of two sets

#include<stdio.h>

#define getSize(x) (sizeof(x)/sizeof(x[0]))

int set_U[]={0,1,2,3,4,5,6,7,8,9};
int set_A[]={1,2,3,4,5};
int set_B[]={0,2,4,6,8};

int U=getSize(set_U);
int A=getSize(set_A);
int B=getSize(set_B);

int i, j;

void UNION();
void INTERSECTION();
void DIFFERENCE();
void COMPLEMENT();
void CARTESIAN_PRODUCT();

int main(){
  UNION();
  INTERSECTION();
  DIFFERENCE();
  COMPLEMENT();
  CARTESIAN_PRODUCT();
  return 0;
}
void UNION(){
  printf("Union = ");
  int temp[U];
  int k=0;
  for(i=0;i<A;i++){ temp[k++]=set_A[i]; }   //add A to new array
  for(i=0;i<B;i++){ temp[k++]=set_B[i]; }   //add B to new array
  int flag;
  for(i=0;i<k;i++){                         //sort array
      for(j=0;j<k-1;j++){
          if(temp[j]>temp[j+1]){
            flag=temp[j];
            temp[j]=temp[j+1];
            temp[j+1]=flag;
          }
      }
  }
  int duplicates=0;
  for(i=0;i<k;i++) { if(temp[i]==temp[i+1]) duplicates++; } //find number of duplicates
  for(i=0;i<k;i++)                         //remove duplicates
      for(j=0;j<k-1;j++)
          if(temp[j]==temp[j+1]){
              temp[j+1]=temp[j+2];
          }
  k-=duplicates;                            //decrease duplicate numbers
  for(i=0;i<k;i++)
      printf("%d ",temp[i]);                //prints AUB
  puts("");
}
void INTERSECTION(){
  printf("Intersection = ");
  for(i=0;i<A;i++)
    for(j=0;j<B;j++)
      if(set_A[i]==set_B[j]){
        printf("%d ",set_A[i]);         //prints ANB
        break;
      }
  puts("");
}
void DIFFERENCE(){
  printf("Difference = ");
  int flag;
  for(i=0;i<A;i++){
      flag=0;
      for(j=0;j<B;j++)
        if(set_A[i]==set_B[j]) flag++;    //if B is present in A, flag > 0
      if(!flag) printf("%d ",set_A[i]);     //prints A-B
  }
  puts("");
}
void COMPLEMENT(){
  printf("Complement of A = ");
  int flag;
  for(i=0;i<U;i++){
      flag=0;
      for(j=0;j<A;j++)
          if(set_U[i]==set_A[j]) flag++;
      if(!flag) printf("%d ",set_U[i]);     //prints U-A
  }
  puts("");
}
void CARTESIAN_PRODUCT(){
  printf("Cartessian Product = ");
  for(i=0;i<A;i++)
      for(j=0;j<B;j++)
          printf("(%d,%d) ",set_A[i],set_B[j]); //prints AxB
  puts("");
}