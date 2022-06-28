// Write a program to generate permutations and combinations

#include <stdio.h>

int fact(int x){
    if(x==0) return 1;
    return x*fact(x-1);
}

int permutation(int n, int r){ return fact(n)/fact(n-r); }

int combination(int n, int r){ return fact(n)/(fact(n-r)*fact(r)); }

int main(){
    int n, r, p, c;
    printf("Enter the values of n and r respectively.\n");
    scanf("%d%d",&n,&r);
    if(n<r){
        printf("Math Error!!! n cannot be less than r\n");
    }else{
        p=permutation(n,r);
        printf("The permutation P(%d,%d) is: %d\n",n,r,p);
        c=combination(n,r);
        printf("The combination C(%d,%d) is: %d\n",n,r,c);
    }
}
