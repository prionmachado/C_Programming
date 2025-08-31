#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test1.txt","r");    //open file

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character = %c\n",ch);
    
    fclose(fptr);    //close file
    return 0;
} 

