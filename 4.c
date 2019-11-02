#include<stdio.h>
int main(){
    int d1,d2,q1,r1;
    printf("enter dividend :- ");
    scanf("%d",&d1);
    printf("enter divisor :- ");
    scanf("%d",&d2);
    r1=d1%d2;
    q1=d1/d2;
    printf("Quotient is %d\n",q1);
    printf("Remainder is %d",r1);
    return 0;
}