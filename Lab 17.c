// Write a C program to print truth table for tautology and contradiction operations

#include<stdio.h>

int main(){
    int p;
    printf("p\t-p\tpv-p\n");
    for(p=0;p<=1;p++){
        printf("%d\t%d\t %d\n",p,!p,p || !p);
    }
    puts("This is tautology");
    printf("p\t-p\tp^-p\n");
    for(p=0;p<=1;p++){
        printf("%d\t%d\t %d\n",p,!p,p && !p);
    }
    puts("This is contradiction");
    return 0;
}
