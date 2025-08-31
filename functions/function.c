#include<stdio.h>
//function declaration/prototype
void printhello();
void printbye();

int main(){
    printhello();   //function call
    printbye();
    return 0;
}

//function definition
void printhello(){
    printf("Hello!\n");
}
void printbye(){
    printf("Goodbye!\n");
}