#include<stdio.h>

int main(){
int len,sum=0;

printf("Enter any natural number: ");
scanf("%d",&len);
for(int i=0;i<=len;i++){
    sum = sum+i;
}
printf("Natural sum is %d", sum);
}
