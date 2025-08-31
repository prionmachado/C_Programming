//sum of first n(input) natural number
//and also reverse them 
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
     
    int sum=0;
    for(int i=1,j=n;i<=n && j>=1;++i, j--){
        sum+=i;  //sum=sum+i
         printf("%d\n",j);
    }
    printf("sum is %d",sum);
    return 0;
}  