// Write a program to generate permutations and combinations

#include <stdio.h>

int permutation(int n, int r){
    int i;
    long p=1,q=1;
    for(i=1;i<=n;i++){
        p *=i;
    }
    for(i=1;i<=(n-r);i++){
        q *= i;
    }
    return p/q;
}

int combination(int n, int r){
    int i;
    long s=1;
    int x= permutation(n,r);
    for(i=1;i<=r;i++){
        s *= i;
    }
    return x/s;
}

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
