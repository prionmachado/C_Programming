//take a number n input from user and print it from 0 to n
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
     
    //solved by while loop method 
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }


    //solved by for loop method
    // for(int i=0;i<=n;i++){
    //     printf("%d\n",i);
    // }
    return 0;
} 