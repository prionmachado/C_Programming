#include<stdio.h>

void printNumbers(int arr[], int n);   //here you can write *arr also instead of arr[]

int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumbers(arr,6);
    return 0;
}
void printNumbers(int arr[],int n){     //here you can write *arr also instead of arr[]
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);  // \t for giving tab space 
    }
} 