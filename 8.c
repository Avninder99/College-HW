#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number ('a') :- ");
    scanf("%d",&a);
    printf("Enter 2nd number ('b') :- ");
    scanf("%d",&b);
    printf("Enter 3rd number ('c') :- ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("A is greatest");
    }
    else if(b>c){
        printf("B is greatest");
    }
    else{
        printf("C is greatest");
    }
    return 0;
}