// Write a C program to implement Fermat's Little Theorem

#include<stdio.h>

int Fermat(int a, int p, int M){
	int i,x,power,d;
	x=1;
	power=a%M;
	while(p>0){
		d=p%2;
		if(d==1)
			x=(x*power)%M;
		power=(power*power)%M;
		p/=2;
	}
	return x;
}

int main(){
	int a,p,r;
	a=2,p=11;
	r=Fermat(a,p-1,p);
	if(r!=1)
		printf("%d is composite",p);
	else
		printf("%d maybe prime",p); 
	return 0;
}
