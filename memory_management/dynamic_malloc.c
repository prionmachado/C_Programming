#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc (5*sizeof(int));
    
    ptr[0] = 6;
    ptr[1] = 5;
    ptr[2] = 10;
    ptr[3] = 34;
    ptr[4] = 3;

    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
} 
