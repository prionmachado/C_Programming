//WAp tp allocate memory to store 5 prices
#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float*)malloc(5 * sizeof(float));

    ptr[0] = 1;
    ptr[1] = 20;
    ptr[2] = 39;
    ptr[3] = 43;
    ptr[4] = 51;

    for(int i=0; i<5;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
} 