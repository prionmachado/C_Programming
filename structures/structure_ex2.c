// Enter address(house no,block,city,state) of 5 people
#include<stdio.h>
#include<string.h>

struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main(){
   struct address adds[4];

   //input
   printf("Enter info for person 1: ");

   scanf("%d\n",&adds[0].house_no);
   scanf("%d\n",&adds[0].block);
   scanf("%s\n",&adds[0].city);
   scanf("%s\n",&adds[0].state);

   printf("Enter info for person 2: ");
   scanf("%d\n",&adds[1].house_no);
   scanf("%d\n",&adds[1].block);
   scanf("%s\n",&adds[1].city);
   scanf("%s\n",&adds[1].state);

    printf("Enter info for person 3: ");
   scanf("%d\n",&adds[2].house_no);
   scanf("%d\n",&adds[2].block);
   scanf("%s\n",&adds[2].city);
   scanf("%s\n",&adds[2].state);

    printf("Enter info for person 4: ");
   scanf("%d\n",&adds[3].house_no);
   scanf("%d\n",&adds[3].block);
   scanf("%s\n",&adds[3].city);
   scanf("%s\n",&adds[3].state);

    printf("Enter info for person 5: ");
   scanf("%d\n",&adds[4].house_no);
   scanf("%d\n",&adds[4].block);
   scanf("%s\n",&adds[4].city);
   scanf("%s\n",&adds[4].state);

   printAdd(adds[0]);
   printAdd(adds[1]);
   printAdd(adds[2]);
   printAdd(adds[3]); 
   printAdd(adds[4]);

//struct address s1 = {1,56,"mumbai","mah"};
    // struct address s2 = {2,45,"nala","mah"};
    // struct address s3 = {3,89,"naigaon","mah"};
    // struct address s4 = {4,28,"mira","mah"};
    // struct address s5 = {5,13,"charni","mah"};
    //printf("%s\n",s1.city);
    return 0;
} 
void printAdd(struct address add){
    printf("Address is : %d %d %s %s\n",add.house_no,add.block,add.city,add.state);
} 