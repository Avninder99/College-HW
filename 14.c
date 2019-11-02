#include <stdio.h>

int main(){
    int n, rn, rem,n1;
    rn=0;
    printf("Enter a number:- ");
    scanf("%d", &n);
    n1=n;
    while(n != 0){
        rem = n%10;
        rn = rn*10 + rem;
        n /= 10;
    }
    printf("Reversed Number = %d",rn);
    return 0;
}