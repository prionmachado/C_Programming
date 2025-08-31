//logical operators//
#include<stdio.h>

int main(){
    printf("%d\n",4>3 && 5>2);
    printf("%d\n",2>3 && 4>2);
    printf("%d\n",1>3 && 3>7);

    printf("%d\n",4>3 || 5>2);
    printf("%d\n",2>3 || 4>2);
    printf("%d\n",1>3 || 3>7);

    printf("%d\n",!(4>6));
    printf("%d\n",!(5<8));

    //mixed operators//
    printf("%d\n",!((5>1) && (3>4)));
    printf("%d\n",!((5>1) || (3>4)));

    return 0;
}