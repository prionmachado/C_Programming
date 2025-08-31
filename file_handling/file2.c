#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test2.txt","w");

    fprintf(fptr,"%d",1);
    fprintf(fptr,"%d",2);
    fprintf(fptr,"%d",3);

    return 0;
} 