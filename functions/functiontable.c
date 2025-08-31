#include<stdio.h>

void printtable(int n);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    printtable(n);  //here n is also known as arguments or actual parameter// 

    return 0;
} 

void printtable(int n){  //here n is known as parameters or formal parameter//
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
} 
