//check if a given character is present in a string or not.
#include<stdio.h>
#include<string.h>

void check_char(char str[],char ch);

int main(){
    char str[100],ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    printf("Enter a character: ");
    scanf("%c",&ch);
    check_char(str,ch);
    return 0;
}
void check_char(char str[],char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]==ch){
        printf("%c is present in the string.\n",ch);
        return ;
        }
    }
    printf("%c is not present in the string.\n",ch);
} 