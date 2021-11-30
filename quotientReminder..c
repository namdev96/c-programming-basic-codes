#include<stdio.h>
int main(){
int a,b,reminder,quotient;
printf("Enter Two Numbers:\n");
scanf("%d%d",&a,&b);
printf("Entered values are :%d,%d\n",a,b);
reminder=a%b;
quotient =a/b;
printf("Reminder is %d and quotient is %d",reminder, quotient);
}
