//factorial of n
#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));

    return 0;
}

//recursive function
int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1 = fact(n-1);  //factNm1 means factorial from 1 to n
    int factN = factNm1 * n;
    return factN;
}