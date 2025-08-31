#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int a=3,b=5;
    swap(a,b);
    _swap(&a,&b);
    return 0;
} 
//call by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d\n",a,b);
}
//call by reference
void _swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("*a = %d & *b = %d\n",*a,*b);
} 
