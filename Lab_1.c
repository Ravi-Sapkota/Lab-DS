// WACP to find the union, intersection, difference, complement and Cartesian product of two sets

// WACP to find the union, intersection, difference, complement and Cartesian product of two sets

#include <stdio.h>

#define getSize(x) sizeof(x)/sizeof(x[0])

int setU[]={0,1,2,3,4,5,6,7,8,9};
int setA[]={1,2,3,4,5};
int setB[]={1,3,5,7,9};

void Union();
void Intersection();
void Difference();
void Complement();
void CartesionProduct();

int main(){
  Intersection();
  Union();
  // printf("Num of intersection = %d\n",x);
  Difference();
  Complement();
  CartesionProduct();
  return 0;
}

void Intersection(){
  int count=0;
  puts("The intersection of given sets A and B is:");
  for(int i=0;i<getSize(setA);i++)
    for(int j=0;j<getSize(setB);j++)
      if(setA[i]==setB[j])
        printf("%d, ",setA[i]);
  printf("\n");
}


void Union(){
  puts("The union of given sets A and B is:");
  int A=getSize(setA), B=getSize(setB);
  int i, j=0, k=A+B;
  int temp[A+B];
  for(i=0;i<A;i++){
    temp[i]=setA[i];
  };
  int flag=i,count;
  for(i=0;i<B;i++){
    count=0;
    for(j=0;j<B;j++){
      if(setB[i]==setA[j])
      count++;
    }
    if(count==0){
      temp[flag]=setB[i];
      flag++;
    }
  }
  for(i=0;i<flag;i++){
    printf("%d, ",temp[i]);
  }
  puts("");
}

void Difference(){
  puts("The difference set A-B is:");
 int A=getSize(setA), B=getSize(setB),i,j,count;
  for(i=0;i<A;i++){
      count=0;
      for(j=0;j<B;j++){
          if(setA[i]!=setB[j])
              count++;
      }
      if(B==count)
      printf("%d, ",setA[i]);
  }
  puts("");
}

void Complement(){
  puts("The complement of set A (U-A) is:");
  int A=getSize(setU), B=getSize(setA),i,j,count;
  for(i=0;i<A;i++){
      count=0;
      for(j=0;j<B;j++){
          if(setU[i]!=setA[j])
              count++;
      }
      if(B==count)
      printf("%d, ",setU[i]);
  }
  puts("");
}

void CartesionProduct(){
  puts("The cartesion product of given sets (AxB) is:");
  for(int i=0;i<getSize(setA);i++)
    for(int j=0;j<getSize(setB);j++)
      printf("(%d,%d), ",setA[i],setB[j]);
  printf("\n");
}