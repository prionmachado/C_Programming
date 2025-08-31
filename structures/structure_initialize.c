//Initializing structures

#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa; 
};

int main(){
    struct student s1 = {"Prion",04,8.6};
    struct student s2 = {"Blaise",05,6.0};
    struct student s3 = {0};

    printf("Student roll no. %d\n",s1.roll);
    printf("Student name. %s",s1.name);

    return 0;
} 