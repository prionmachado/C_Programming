// nested switch
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n>=0) {
        printf("positive\n");
        if (n%2 == 0){
        printf("even\n");
    }else {
        printf("odd\n");
    } 
   } else {
        printf("negative\n");
         }
         return 0;
} 