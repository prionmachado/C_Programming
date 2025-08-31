/* Writ a program to check if a student 
is passed or failed
marks>30 paas
marks<=30 fail */
#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks(0-100):");
    scanf("%d",&marks);

     //ternary method
     marks <= 30 ? printf("Fail\n"): printf("Pass");

    return 0;
    
    // if else method
    // if (marks>=0 && marks<=30) {
    //     printf("Failed\n");
    // }
    // else if(marks>30 && marks<=100){
    //     printf("Passed\n");
    // }
    // else {
    //     printf("Wrong marks");
    // }
   // return 0;
}  