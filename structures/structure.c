#include<stdio.h>
#include<string.h>

    struct student
    {
        int roll;
        char name[100];
        float cgpa;
    };

int main(){
    struct student s1;
    s1.roll = 4;
    s1.cgpa = 7.5;
    //s1.name = "Prion";    // we can't assign a string directly
    strcpy(s1.name, "Prion");    //so we are copying the string and assigning it to s1.name then printing it.

    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);
    return 0;
} 
