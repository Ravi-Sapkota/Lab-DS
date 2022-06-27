// Write a program to implement linear search using recursion

#include <stdio.h>

int LinearSearch(int arr[],int s,int r,int x){
    if(r<x)
        return -1;
    if(arr[s]==x)
        return s;
    return LinearSearch(arr,s+1,r,x);
}

int main(){
    int n, key,pos;
    printf("Enter the size of array.\t");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    
    pos=LinearSearch(array,0,n-1,key);
    
    if(pos==-1){
        printf("Element %d is not present in the given array",key);
    }else{
        printf("Element %d is present at position %d",key,pos+1);
    }
    return 0;
}
