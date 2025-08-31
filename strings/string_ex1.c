/*Create a string firstName and lastName to store details of user and print all
the characters using a loop */

#include<stdio.h>

void printString(char arr[]);

int main(){
    char firstName[20];
    char lastName[20];
    printf("Enter your first name: ");
    scanf("%s",&firstName);
    printf("Enter your last name: ");
    scanf("%s",&lastName);

    printString(firstName);
    printString(lastName);
    return 0;
} 

void printString(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
        printf("%c", arr[i]);
    }
 printf("\n");
} 