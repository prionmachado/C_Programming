#include<stdio.h>

void printprice(float value);

int main(){
    float value;
    printf("Enter the value:");
    scanf("%f",&value);
    printprice(value);
    return 0;
} 

void printprice(float value){
    value=value+(0.18*value);
    printf("The final price is %f",value);
} 