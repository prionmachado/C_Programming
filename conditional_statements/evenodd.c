//write a program to check even odd//
#include<stdio.h>
//even ---> 1
  //odd  ---> 0 


int main(){
  int b;
  printf("Enter your number:");
  scanf("%d",&b);
  printf("%d",b % 2 == 0);
  return 0;
} 