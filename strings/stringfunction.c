#include<stdio.h>
//gets(name);      Don't use this bacause its dangerous and outdated

int main(){
    char name[100];

    fgets(name,100,stdin);
    puts(name);

    return 0;
} 
    

