//Write a function named slice, which takes a string and returns a sliced string from index n to m.
#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main(){
    int n,m;
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Enter the start index: ");
    scanf("%d", &n);
    printf("Enter the end index: ");
    scanf("%d",&m);
    slice(str,n,m);
    return 0;
}

void slice(char str[],int n ,int m){
    char newstr[100];
    int j = 0;
    for(int i=n; i<=m; i++){
        newstr[j] = str[i];
        j++;
    }
    newstr[j] = '\0';
    printf("Sliced string: %s\n",newstr);
} 