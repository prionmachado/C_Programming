#include<stdio.h>

void printAddress(int n);
void _printAddress(int *n);

int main(){
    int n = 4;
    printf("%u\n",&n);

    printAddress(n);
    _printAddress(&n);
    return 0;
} 

//call by value
void printAddress(int n){
    printf("%u\n",&n);
} 

//call by reference
void _printAddress(int *n){
     printf("%u\n",n);
} 
