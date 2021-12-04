#include<stdio.h>

int main(){
int fact=1,num;

printf("Enter any natural number: ");
scanf("%d",&num);
if(num<0){
    printf("Can not find factorail of negative numbers");
}
else if(num==0){
printf("Factorial of zero is %d",fact);
}
else{
for(int i=1;i<=num;i++){
    fact = fact*i;
}
}
printf("%d",fact);
}

