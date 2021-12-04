#include<stdio.h>


int main(){
int c;
printf("Enter a charcater:");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
    printf("ENtered charcter is vowel");
}
else{
    printf("Entered character is consonent");
}
}
