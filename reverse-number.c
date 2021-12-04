#include<stdio.h>

int main(){
int rev=0,num,rem;
printf("Enter any number");
scanf("%d",&num);
while(num>0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}
printf("Reveresed is %d",rev);
}
