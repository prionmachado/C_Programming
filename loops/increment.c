#include<stdio.h>
//++i is called pre increment operator
//i++ is called post increment operator

int main(){
    //increment operators
    //++i ++i
    int i=1;
     printf("%d\n",i++); //it means first use and then increase
     printf("%d\n",i++);
    
    printf("%d\n",++i); //it means first increase and then use
    printf("%d\n",++i);
    return 0;
}