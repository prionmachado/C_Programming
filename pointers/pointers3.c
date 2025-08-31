#include<stdio.h>

void dowork(int a, int b, int *sum, int *product, int *avg);

int main(){
    int a,b;
    int sum,product,avg;
    printf("Enter number:");
    scanf("%d",&a);
    printf("Enter number:");
    scanf("%d",&b);
    dowork(a,b,&sum,&product,&avg);

    printf("sum=%d, product=%d, avg=%d",sum,product,avg);
    return 0;
}

void dowork(int a, int b, int *sum, int *product, int *avg){
    *sum=a+b;
    *product=a*b;
    *avg=(a+b)/2;
} 
