#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");    //open file

    int ch;
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    
    
    fclose(fptr);    //close file
    return 0;
} 

