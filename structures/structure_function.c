#include<stdio.h>

struct student {
    int roll;
    char name[100];
    float cgpa;
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {69,"prion",8.5};
    printInfo(s1);
    
    return 0;
}

void printInfo(struct student s1){
    printf("Student roll No: %d\n",s1.roll);
    printf("Student name: %s\n", s1.name);
    printf("Student CGPA: %f\n", s1.cgpa);
} 