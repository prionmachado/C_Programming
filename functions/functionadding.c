#include<stdio.h>

int sum(int a, int b);      //function declaration

int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
            
    printf("sum is %d\n",sum(a,b));      //function call
    return 0;
} 

int sum(int a, int b){     //function definition
    return a+b;
} 