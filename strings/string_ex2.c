// make a program that inputs user's name and print it's length.

#include<stdio.h>
    
int printLength(char arr[]);

int main(){
    char name[50];
    printf("Enter your first name: ");
    scanf("%s",&name);
    
    printf("Length is %d",printLength(name));
    return 0;
} 

int printLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0';i++){
        count++;
    }
    return count;
} 