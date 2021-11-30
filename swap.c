#include<stdio.h>

int main(){
int first,second,temp;

printf("Enter Two Numbers:");
scanf("%d%d",&first,&second);
printf("Before Swapping The numbers are: %d and %d\n", first,second);
temp =first;
first = second;
second = temp;
printf("After Swapping the numbers are: %d and %d", first, second);
}
