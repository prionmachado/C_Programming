#include<stdio.h>
#include<math.h>

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

    float interest=p*pow((1+r/100),n);
    printf("The Compound interest is %f",interest);
    return 0;
}