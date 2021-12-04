#include<stdio.h>

int main(){
int num1,num2,i,gcd,lowest;

printf("Enter two numbers: ");
scanf("%d%d",&num1,&num2);
if(num1>num2){
    lowest=num1;
}
else{
    lowest=num2;
}
for(i=1;i<=lowest;i++){
        if(num1%i==0&&num2%i==0){
            gcd=i;
        }

}
printf("gcd is %d",gcd);
}

