// Write a C program to implement modular exponentiation algorithm (computing b^n mod m)

#include <stdio.h>

int exponentMod(int a, int n, int m){
    if(a==0) return 0;
    if(n==0) return 1;
    long int y;
    if(n%2 == 0){
        y = exponentMod(a,n/2,m);
        y=(y*y)%m;
    }else{
        y=a%m;
        y=(y*exponentMod(a,n-1,m)%m)%m;
    }
    return (int)((y+m)%m);
}

int main() {
    int a=2, n=10,m=7;
    printf("%d^%d mod %d = %d",a,n,m,exponentMod(2,10,7));
    return 0;
}
