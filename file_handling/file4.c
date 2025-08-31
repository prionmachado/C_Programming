#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test4.txt","r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);    //it acts like ch++;
        }
        printf("\n");

    fclose(fptr);
    return 0;
} 