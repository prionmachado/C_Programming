//create a 2D array, storing the tables of 2 & 3
#include <stdio.h>

void storeTable(int arr[][10],int n,int number);

int main(){
    int tables[2][10];
    storeTable(tables,0,2);
    storeTable(tables,1,3);
    
    // for(int i=0; i<10; i++){  //0 to 10
    //     printf("%d\t", tables[0][i]);
    // }
    // printf("\n");

    // for(int i=0; i<10; i++){  //0 to 10
    // printf("%d\t", tables[1][i]);
    // }
    // printf("\n");
   return 0;
}

void storeTable(int arr[][10],int n,int number){
    for(int i=0;i<10;i++){   // 0 to 10
        arr[n][i] = number * (i+1);  // 2,4,6,8,10.....
        printf("%d\t ",arr[n][i]);
    }
    printf("\n");
} 
