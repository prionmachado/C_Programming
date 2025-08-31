// Write a function to count the occurrence of vowels in a string.
#include<stdio.h>
#include<string.h>

int count_vowels(char str[]);

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    printf("Vowels are: %d\n",count_vowels(str));
    return 0;
}

int count_vowels(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u'||str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
            str[i] == 'U' ){
            count++;
        }
    }
     return count;
} 