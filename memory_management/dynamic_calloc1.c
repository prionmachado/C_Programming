// WAP to allocate memory of size n, where n is entered by the user
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

    free(ptr);
    return 0;
} 


