//Sum of first n natural numbers
#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
   printf("Sum is : %d",sum(n));
   return 0;
   }

//recursive function
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);  //sumNm means sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
    }