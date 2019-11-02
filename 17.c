#include<stdio.h>
int main(){
    int nums,a,b,x,i;
    printf("Enter number :- ");
    scanf("%d",&nums);
    for(x=1;x<=nums;x++){  
        a=0;
        for(i=1;i<=x;i++){
            if (x%i==0){
                a=a+1;
            }
        }
        if(a==2){
            printf("%d\n",x);
        }
    }
    return 0;
} 