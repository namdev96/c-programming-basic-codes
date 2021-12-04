#include<stdio.h>

int main(){
int count=0,num;
printf("Enter any number");
scanf("%d",&num);
    for(int i =1;i<=num;i++){
        if(num%i==0){
              count=count+1;
        }
    }



if(count==2){
    printf("Pime");
}else
printf("Not Prime");
}

