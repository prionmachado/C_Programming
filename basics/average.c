//write a code to find average of 3 numbers//
#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    int sum=a+b+c;
    printf("%d",sum/3);
    return 0;
} 