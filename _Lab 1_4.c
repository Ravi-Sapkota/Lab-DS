// Write a C program to implement fuzzy set operations.

#include <stdio.h>

int main(){
  float A,B;
  puts("Enter the value of A and B(0.00-1.00)");
  scanf("%f%f",&A, &B);
  puts("The fuzzy set operations for given two values are: ");
  printf("Union : %0.2f\n",(A>B?A:B));
  printf("Intersection : %0.2f\n",(A<B?A:B));
  printf("Complement of A : %0.2f\n",(1-A));
  return 0;
}