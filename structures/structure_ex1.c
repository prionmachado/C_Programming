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


    struct student s2;
    s2.roll = 5;
    s2.cgpa = 6.5;
    //s2.name = "Blaise";    // we can't assign a string directly
    strcpy(s2.name, "Blaise");    //so we are copying the string and assigning it to s1.name then printing it.

    printf("Name: %s\n", s2.name);
    printf("Roll No: %d\n", s2.roll);
    printf("CGPA: %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 40;
    s3.cgpa = 8.5;
    //s3.name = "Ishun";    // we can't assign a string directly
    strcpy(s3.name, "Ishun");    //so we are copying the string and assigning it to s1.name then printing it.

    printf("Name: %s\n", s3.name);
    printf("Roll No: %d\n", s3.roll);
    printf("CGPA: %f\n", s3.cgpa);

    return 0;
} 