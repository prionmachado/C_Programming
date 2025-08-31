//free the memory allocated with calloc
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr;
    int n;
    printf("Enter the size of memory to be allocated:");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }

    free(ptr);      //free the memory allocated to malloc and calloc

    ptr=(int*)calloc(2,sizeof(int));

    for(int i=0;i<2;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
} 
