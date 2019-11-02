#include<stdio.h>
int main(){
    int n1,n0,sum;
    sum=1;
    printf("Enter Number :- ");
    scanf("%d",&n1);
    for(int x=n1;x>1;x--){
        sum=sum*x;
        printf("%d * ",x);
        n1=n1-1;
    }
    printf("1");
    printf("\n");
    printf("%d",sum);
    return 0;
}