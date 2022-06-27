// Write a program to implement binary search using recursion

#include <stdio.h>

int binary_search(int [], int, int, int);
void bubble_sort(int [], int);

int main(){
    int n, key,pos;
    printf("Enter the size of array.\t");
    scanf("%d",&n);
    int array[n];
    printf("Enter the %d elements of the array\n",n);

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    bubble_sort(array, n);
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    
    pos=binary_search(array, 0, n, key);
    
    if(pos==-1){
        printf("Element %d is not present in the given array",key);
    }else{
        printf("Element %d is present at position %d",key,pos+1);
    }
    return 0;
}

void bubble_sort(int list[], int s){
    int temp, i, j;
    for (i = 0; i < s; i++){
        for (j = i; j < s; j++){
            if (list[i] > list[j]){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("\n\nThe sorted array is:\n");
    for(i=0;i<s;i++){
        printf("%d ",list[i]);
    }
    printf("\n\n");
}

int binary_search(int list[], int l, int h, int key){
    int mid;
    if (l > h){
        printf("Key not found.\n");
        return -1;
    }
    mid = (l + h) / 2;
    if (list[mid] == key){
        return mid;
    }
    else if (list[mid] > key){
        binary_search(list, l, mid - 1, key);
    }
    else if (list[mid] < key){
        binary_search(list, mid + 1, h, key);
    }
}
