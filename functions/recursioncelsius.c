//convert celsius to farenheit
#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float farenheit;
    printf("Enter celsius:");
    scanf("%f",&farenheit);
    printf("Farenheit is : %f",convertTemp(farenheit));

    return 0;
}

float convertTemp(float celsius){
    float far = celsius * (9.0/5.0)+ 32;
    return far;
}