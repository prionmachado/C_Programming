//Simple interest
#include<stdio.h>

int main(){

    int p;
    int n;
    float r;
    printf("Enter the principal amount:");
    scanf("%d",&p);
    printf("Enter the number of years:");
    scanf("%d",&n);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("The Simple interest is %d",p*n*r/100);
    return 0;

}