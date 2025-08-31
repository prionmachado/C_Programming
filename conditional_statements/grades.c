// write a program to enter marks and give grades
#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks(0-100):");
    scanf("%d",&marks);

    if (marks<30){
        printf("your grade is C");
    }
    else if(marks>=30 && marks<70){
        printf("Your grade is B");
    }
    else if(marks>=70 && marks<90){
        printf("Your grade is A");
    }
    else if (marks>=90 && marks<=100){
        printf("Your grade is A+");
    }
    else {
        printf("Wrong marks"); 
    }
    return 0;
}