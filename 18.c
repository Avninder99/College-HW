#include<stdio.h>
int main(){
    int n,i,a,num=0;
    printf("Enter Number :-\n");
    scanf("%d",&n);
    while(n!=0){
        i=n%10;
        num=num+(i*i*i);
        n/=10;
    }
    printf("%d",num);
    return 0;
}