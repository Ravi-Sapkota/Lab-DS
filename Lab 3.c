// Write a C program to find ceiling and floor value of a variable or expression

#include <stdio.h>

int main(){
    float val = 3.6;
    int temp = (int) val;
    int floor = temp;
    int ceiling = (temp == val) ? temp : temp + 1;
    printf("Floor = %d\nCeiling = %d",floor,ceiling);
    return 0;
}
