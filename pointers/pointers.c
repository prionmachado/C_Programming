#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    //printing address

    // printf("%p\n",&age); 
    printf("%u\n",&age);     

    // printf("%p\n",ptr);
    printf("%u\n",ptr);

    // printf("%p\n",&ptr);
    printf("%u\n",&ptr);
     
    // printing value
    printf("%d\n",age);

    printf("%d\n",*ptr);

    printf("%d\n",*(&age));

    return 0;
}
