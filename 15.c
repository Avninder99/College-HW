#include <stdio.h>
int main(){
    int n, rn, rem,n1;
    rn = 0;
    printf("Enter a number :- ");
    scanf("%d", &n);
    n1 = n;
    while(n != 0){
        rem = n%10;
        rn = rn*10 + rem;
        n /= 10;
    }
    if(rn == n1){
        printf("Number is Palandromic");
    }
    else{
        printf("Number is not Palandromic");
    }
    return 0;
}