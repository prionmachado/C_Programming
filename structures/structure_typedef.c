#include<stdio.h>

typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}coe;

int main(){
    coe s1 = {51,9.4,"Prion"};
   
    printf("Student name is %s\n",s1.name);

    return 0;
} 
