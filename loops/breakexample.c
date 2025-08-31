//keep taking inputs from user until user inputs an odd number
#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter your number:");
        scanf("%d",&n);
        
        if(n%2 != 0){
            break;
        }
    }while(1);
    printf("Thankyou");

    return 0;
} 