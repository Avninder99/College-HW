#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number ('a') :- ");
    scanf("%d",&a);
    printf("Enter 2nd number ('b') :- ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d,b = %d",a,b);
    return 0;
}