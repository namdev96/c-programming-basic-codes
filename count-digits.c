#include<stdio.h>

int main(){
int num,sum=0,rem;
printf("Enter any number for which you want to count digits\n ");
scanf("%d",&num);
while(num>0){
    rem = num%10;
    sum = sum+1;
    num=num/10;

}
printf("Number of digits are %d",sum);
}
