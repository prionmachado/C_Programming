#include<stdio.h>

int main(){
    FILE *fptr;
    fptr =fopen("test4.txt","w");

    fprintf(fptr,"%s","p");
    fprintf(fptr,"%s","r");
    fprintf(fptr,"%s","i");
    fprintf(fptr,"%s","o");
    fprintf(fptr,"%s","n");

    // you can do this by fgetc and fputc
    // fputc('p',fptr);
    // fputc('r',fptr);
    // fputc('i',fptr);
    // fputc('o',fptr);
    // fputc('n',fptr);

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    
    //uncomment if you want to but any one
    
    fclose(fptr);
    return 0;
} 