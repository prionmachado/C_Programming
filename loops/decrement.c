#include<stdio.h>
//--i is called pre decrement operator
//i-- is called post decrement operator

int main(){
    //decrement operators
    //--i i--
    int i=1;
     printf("%d\n",i--); //it means first use and then decrease
     printf("%d\n",i--);
    
    printf("%d\n",--i); //it means first decrease and then use
    printf("%d\n",--i);
    return 0;
}