//check whether the given number is a natural number
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if (n>0) {
        printf("It is a natural number");
    }
    else {
        printf("Its not a natural number");
    }
    return 0;
}