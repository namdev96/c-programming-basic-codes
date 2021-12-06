#include<stdio.h>

int main(){
int low,high,flag,i;
printf("Enter any two positive number");
scanf("%d%d",&low,&high);
while(low<high){
    flag=0;
         if (low <= 1) {
         ++low;
         continue;
      }

    for( i = 2;i<=low/2;++i){
        if(low%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d\n",low);
    }
    ++low;
}
}






