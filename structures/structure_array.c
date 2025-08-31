#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student OE[100];
    OE[0].roll = 04;
    OE[0].cgpa = 3.5;
    strcpy(OE[0].name,"Prion");
    printf("%d\n%f\n%s\n",OE[0].roll,OE[0].cgpa,OE[0].name);
     
    return 0;
} 