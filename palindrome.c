#include<stdio.h>

int main(){
int rev=0,num,rem,temp;
printf("Enter any number");
scanf("%d",&num);
temp=num;
while(temp>0){
    rem=temp%10;
    rev=rev*10+rem;
    temp/=10;
}
if(rev==num){
    printf("Palindrome");
}
else
printf("Not a plaindrome");
}

