#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    char surname[100];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your surname:");
    scanf("%s",surname);
    strcpy(surname,name);
    puts(surname);
    return 0;
} 