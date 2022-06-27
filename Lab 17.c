// Write a C program to print truth table for tautology and contradiction operations

#include <stdio.h>
#include <stdlib.h>

int main(){
    int p,q;
    puts("p\tq\tp^q\tq^p");
    for(p=0;p<2;p++)
        for(q=0;q<2;q++){
            printf("%d\t%d\t %d \t %d\n",p,q,p&&q,q&&p);
            if(p&&q != q&&p) puts("Not Valid"), exit(1);
        }
    puts("Hence, the statement is valid");
    
    return 0;
}
