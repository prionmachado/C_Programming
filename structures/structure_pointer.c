#include<stdio.h>

struct student{
    char name[20];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Prion",45,8.5};
    printf("Student roll = %d\n",s1.roll);   // normal print

    struct student *ptr;
    ptr = &s1;
    printf("Student roll = %d\n",(*ptr).roll);  //printing using pointer
    printf("Student name = %s\n",(*ptr).name);
    printf("Student cgpa = %f\n",(*ptr).cgpa);

    //printing using arrow operator
    printf("Student roll = %d\n",ptr->roll);
    printf("Student name = %s\n",ptr->name);
    printf("Student cgpa = %f\n",ptr->cgpa);

    return 0;
} 