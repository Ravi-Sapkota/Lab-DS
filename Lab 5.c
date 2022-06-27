// Write a C program to generate different sequences.

#include<stdio.h>
#include<math.h>

#define n 10

void arithematic(int a, int d){
	printf("The AP is : ");
	for(int i=1;i<=n;i++){
		printf("%d ",a+(i-1)*d);
	}
}  
void geometric(int a, int r){
	printf("\nThe GP is : ");
	for(int i=1;i<=n;i++)	{
		int term=a*(pow(r,i-1));
		printf("%d ",term);	
	}
}

int main(){
    int a=2, d=2, r=d;
    arithematic(a,d);
    geometric(a,r);
    return 0;
}
