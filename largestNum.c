#include<stdio.h>

int main(){
int a,b,c;
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c){
    printf("a is greater");
}
else if(b>=c&&b>=a){
    printf("b is greater");
}
else{
    printf("c is greater");
}
}
