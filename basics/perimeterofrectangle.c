//perimeter of rectangle
#include<stdio.h>

int main(){

    int length;
    int breadth;
    printf("Enter the length:");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    printf("Perimeter of rectangle is %d",2*(length+breadth));
    return 0;

}