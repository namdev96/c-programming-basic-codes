#include<stdio.h>

int main(){
int len,sum=0;

printf("Enter any natural number: ");
scanf("%d",&len);
while(len>0){
    sum = sum+len;
    len--;
}
printf("Natural sum is %d", sum);
}
