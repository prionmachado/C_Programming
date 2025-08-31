//find the salted form of a password entered by user if the salt is "123" and added at the end
#include<stdio.h>
#include<string.h>

void salting(char passwsord[]);

int main(){
    char password[100];
    printf("Enter your password: ");
    scanf("%s",password);
    salting(password);
    return 0;
} 

void salting(char password[]){
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass,password); 
    strcat(newpass,salt);
    puts(newpass);
} 
