#include<stdio.h>
int main(){
    int y,n1,n2,fn;
    printf("Enter length of fibonacci series :- ");
    scanf("%d",&y);
    n1=0;
    n2=1;
    printf("0, 1, ");
    for(int x=0;x<=y;x++){
        fn=n1+n2;
        printf("%d, ",fn);
        n1=n2;
        n2=fn;
    }
    return 0;
}
