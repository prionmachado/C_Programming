//write a program to find upper case or lower case
#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z') {
        printf("Upper case");
    }
    else if(ch>='a' && ch<='z'){
        printf("lower case");
    }
    else {
        printf("Not Enlish letter");
    }
    return 0;
}