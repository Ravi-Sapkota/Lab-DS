// Write a C program to implement modular exponentiation algorithm (computing b^n mod m)

#include<stdio.h>

int modularExponentiation(int b,int n,int M){
	int i,x,power,d;
	x=1;
	power=b%M;
	while(n>0){
		d=n%2;
		if(d==1)
			x=(x*power)%M;
		power=(power*power)%M;
		n=n/2;
	}
	return x;
}

int main(){
	int b,n,M,r;
	b=10,n=1,M=5;
	r=modularExponentiation(b,n,M);
	printf("%d^%d mod %d = %d" ,b,n,M,r);
}
