// Multidimensional array // 2D array
#include<stdio.h>

//store 2 students 3 subjects marks

int main(){
    int marks[2][3];  

    marks[0][0] = 90;
    marks[0][1] = 80;
    marks[0][2] = 70;
    
    marks[1][0] = 60;
    marks[1][1] = 50;
    marks[1][2] = 40;

    printf("%d\t", marks[0][0]);
    printf("%d\t", marks[0][1]);
    printf("%d\t", marks[0][2]);
    printf("%d\t", marks[1][0]);
    printf("%d\t", marks[1][1]);
    printf("%d\t", marks[1][2]);
    
    return 0;
} 