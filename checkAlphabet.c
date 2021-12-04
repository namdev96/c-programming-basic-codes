#include<stdio.h>

int main(){
char c;
printf("Enter any character");
scanf("%c",&c);
if(c>='a'&& c<='z'||c>='A'&&c<='Z'){
    printf("Entered character is Alphabet");

}
else{
    printf("Entered Charcter is Number");
}
}
