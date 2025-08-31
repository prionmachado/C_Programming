//if else conditional statements//
#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=18){
        printf("You Are an adult\n"); 
    }
    else if (age>13 && age<18){ 
        printf("You are a teenager");
    }
    else {
        printf("You are a child");   
    }
    return 0;
} 