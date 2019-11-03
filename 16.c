#include<stdio.h>
int main(){
    int a,i,x;
    printf("Enter number :- ");
    scanf("%d",&x);
    a=0;
    for(i=1;i<=x;i++){
        if (x%i==0){
            a=a+1;
        }            
    }
    if(a==2){
        printf("%d is a prime number",x);
    }
    else{
        printf("%d is not a prime number",x);
    }
    return 0;
}