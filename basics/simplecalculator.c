//this code is of simple calculator
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    
    printf("Addition is %d\n",a+b);
    printf("Subtraction is %d\n",a-b);
    printf("Multiplication is %d\n",a*b);
    printf("Division is %d\n",a/b);
    printf("Modular is %d\n",a%b);
    

    return 0; 

}