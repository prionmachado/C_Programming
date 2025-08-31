#include<stdio.h>

float calPercentage(int science,int maths,int hindi,int marathi,int english,int history);

int main(){
    int a,b,c,d,e,f;
    printf("Enter science marks:");
    scanf("%d",&a);
    printf("Enter maths marks:");
    scanf("%d",&b);
    printf("Enter hindi marks:");
    scanf("%d",&c);
    printf("Enter marathi marks:");
    scanf("%d",&d);
    printf("Enter english marks:");
    scanf("%d",&e);
    printf("Enter history marks:");
    scanf("%d",&f);

    printf("Percentage is :%f",calPercentage(a,b,c,d,e,f));
    return 0;
} 

float calPercentage(int science,int maths,int hindi,int marathi,int english,int history){
    return ((science+maths+hindi+marathi+english+history)/6);
} 


