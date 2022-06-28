// Write a program to implement linear search using recursion
#include <stdio.h>
int RecursiveLS(int arr[], int value, int index, int n){
    int pos = 0;
    if(index >= n){
        return 0;
    }else if (arr[index] == value){
        pos = index + 1;
    }else{
        return RecursiveLS(arr, value, index+1, n);
    }
    return pos;
}
 
int main(){
    int n=10, value, pos;
    int arr[]={0,1,2,3,4,5,6,7,8,9};
 
    printf("Enter the element to search  ");
    scanf("%d", &value);
 
    pos =  RecursiveLS(arr, value, 0, n);
    if (pos != 0){
        printf("Element found at pos %d ", pos);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
