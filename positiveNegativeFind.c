#include<stdio.h>

int main(){
int num;
printf("Enter a number");
scanf("%d",&num);

if(num>0){
    printf("Number is posituve");
}
else if(num==0){
    printf("You entred zero");
}
else{
    printf("umber is negative");
}
}
