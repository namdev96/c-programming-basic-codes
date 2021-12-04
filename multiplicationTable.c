#include<stdio.h>

int main(){
int num,mul=1;

printf("Enter any natural number to find multiplication table: ");
scanf("%d",&num);
for(int i=1;i<=10;i++){
   printf("%d X %d=%d\n",num,i,num*i);

}
}
