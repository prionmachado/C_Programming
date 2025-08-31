#include<stdio.h>

int main(){

  int marks[3];  //array

  printf("Enter marks:");
  scanf("%d",&marks[0]);

  printf("Enter marks1:");
  scanf("%d",&marks[1]);

  printf("Enter marks2:");
  scanf("%d",&marks[2]);

  printf("marks = %d, marks1 = %d, marks2 = %d", marks[0],marks[1], marks[2]);

   return 0;
}  