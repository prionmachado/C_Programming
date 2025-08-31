#include<stdio.h>
#include<string.h>

int main(){
    char name[100] = "Prion";   // write size like 100 compulsory
    char surname[] = "blaise";

    strcat(name, surname);
    puts(name);

    return 0;
} 