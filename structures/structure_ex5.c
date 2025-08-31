#include<stdio.h>

typedef struct bank_account{
    char name[100];
    int account_no;
    int money;
}acc;

int main(){
    acc s1 = {"Prion",1,10000};
    acc s2 = {"Blaise",2,12000};
    acc s3 = {"Ona",3,15000};

    printf("Account 1 detailts:\n");
    printf("Name: %s\n",s1.name);
    printf("Account No: %d\n",s1.account_no);
    printf("Money: %d\n",s1.money);

    printf("\n");

    printf("Account 2 details:\n");
    printf("Name: %s\n",s2.name);
    printf("Account No: %d\n",s2.account_no);
    printf("Money: %d\n",s2.money);

    printf("\n");

    printf("Account 3 details:\n");
    printf("Name: %s\n",s3.name);
    printf("Account No: %d\n",s3.account_no);
    printf("Money: %d\n",s3.money);
    
    return 0;
} 