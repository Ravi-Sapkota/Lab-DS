// Write a program to implement binary search using recursion


#include <stdio.h>

int binary_search(int [], int, int, int);
// void bubble_sort(int [], int);

int main(){
    int n=10, key,pos;
    int array[]={0,1,2,3,4,5,6,7,8,9};
    
    // bubble_sort(array, n);
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

// void bubble_sort(int list[], int s){
//     int temp, i, j;
//     for (i = 0; i < s; i++){
//         for (j = i; j < s; j++){
//             if (list[i] > list[j]){
//                 temp = list[i];
//                 list[i] = list[j];
//                 list[j] = temp;
//             }
//         }
//     }
//     printf("\n\nThe sorted array is:\n");
//     for(i=0;i<s;i++){
//         printf("%d ",list[i]);
//     }
//     printf("\n\n");
// }

int binary_search(int list[], int l, int h, int key){
    int mid;
    if (l > h){
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
