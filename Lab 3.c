// Write a C program to find ceiling and floor value of a variable or expression

#include<stdio.h>
void isCeilling(float x){
	if(x>=0) 	printf("The ceiling value=%d",(int)(x+1));
	else      printf("The ceiling value=%d",(int)(x));
}
void isFloor(float y){
	if(y>=0)	printf("\nThe floor value=%d",(int)(y));
	else      printf("\nThe floor value=%d",(int)(y-1));
}
int main(){
	float i;
	printf("Enter any float value:");
	scanf("%f",&i);
	isCeilling(i);
	isFloor(i);
	return 0;
} 
