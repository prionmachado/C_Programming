#include<stdio.h>

void printnamaste();
void printbonjour();

int main(){
    char ch;
     printf("Enter i for indian or f for french:");
     scanf("%c",&ch);
     if (ch =='i'){
        printnamaste();
        }
        
    else{
        printbonjour();
    }
    return 0;
}

void printnamaste(){
    printf("Namaste!\n");
}
void printbonjour(){
    printf("Bonjour!\n");
}