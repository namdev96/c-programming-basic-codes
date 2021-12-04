#include<stdio.h>

int main(){
int first=0,second=1,next,len;

printf("Enter any natural number to find fibo series: ");
scanf("%d",&len);
printf("%d\n",first);
printf("%d\n",second);
for(int i=1;i<=len;i++){
next=first+second;
printf("%d\n",next);
first=second;
second=next;
}
}
