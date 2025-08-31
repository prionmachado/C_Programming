#include<stdio.h>
#include<string.h>

int main(){
    char name[100];

    printf("Enter your name:");
    scanf("%s",name);

    int length = strlen(name);
    printf("Length is :%d\n",length);
    return 0;
}   