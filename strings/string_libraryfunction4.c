#include<stdio.h>
#include<string.h>

int main(){
    char name[100] = "Prion";   // write size like 100 compulsory
    char surname[] = "blaise";

    char firststr[100] = "Prion";
    char secstr[] = "Prion";

    char thirdstr[100] = "blaise";
    char fourthstr[] = "Prion";

    printf("%d\n",strcmp(name,surname));
    printf("%d\n",strcmp(firststr,secstr));
    printf("%d",strcmp(thirdstr,fourthstr));

    return 0;
} 