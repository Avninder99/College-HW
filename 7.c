#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number ('a') :- ");
    scanf("%d",&a);
    printf("Enter 2nd number ('b') :- ");
    scanf("%d",&b);
    if(a>b){
        printf("A is greater");
    }
    else if(b>a){
        printf("B is greater");
    }
    else{
        printf("A and B are equal");
    }
    return 0;
}