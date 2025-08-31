//Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
   
    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }

    ptr = realloc(ptr,8);

     printf("Enter 8 numbers: ");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }

    //printing the values
    printf("Values are:\n");
    for(int i=0;i<8;i++){
        printf("Number %d is %d\n",i,ptr[i]);
    }
    return 0;
} 
