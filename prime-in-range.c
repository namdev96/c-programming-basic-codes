#include<stdio.h>

int main(){
int num1,num2,flag,i;
printf("Enter any two positive number");
scanf("%d%d",&num1,&num2);
while(num1<num2){
    flag=0;
         if (num1 <= 1) {
         ++num1;
         continue;
      }

    for( i = 2;i<=num1/2;++i){
        if(num1%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d\n",num1);
    }
    ++num1;
}
}






