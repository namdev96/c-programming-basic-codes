#include<stdio.h>

int main(){
int ch,num1,num2;
printf("Enter Your Choice\n");
printf("1.Addition\n");
printf("2.Multiplication\n");
printf("3.DIVISION\n");
scanf("%d",&ch);
printf("Enter two numbers");
scanf("%d%d",&num1,&num2);
switch(ch){
case 1:
    printf("Addition of %d %d is: %d",num1,num2,num1+num2);
    break;
case 2:
    printf("Multiplication of %d %d is: %d",num1,num2,num1*num2);
    break;
case 3:
    printf("Division of %d %d is: %d",num1,num2,num1/num2);
    break;
default:
    printf("Invalid Option!");
}

}
