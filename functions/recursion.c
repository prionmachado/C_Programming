#include<stdio.h>

void printhw(int count);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printhw(n);
    return 0;
} 

//recursive function
void printhw(int count){
    if (count==0){
        return;
    }
    printf("Hello World\n");
    printhw(count-1);
} 
