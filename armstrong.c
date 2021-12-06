#include <math.h>
#include <stdio.h>

int main() {
    int rem, sum=0, num,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        sum=sum+pow(rem,3);
        temp/=10;
    }
    // calculates the power

    if(sum==num){
        printf("Armstrong");
    }
    else{
        printf("Not armrtong");
    }


}

