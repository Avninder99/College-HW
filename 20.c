#include<stdio.h>
int main(){
    int x,n,a;
    int arr1[10];
    for(x=0;x<10;x++){
        printf("Enter number for %d place in array :- ",x+1);
        scanf("%d",&n);
        arr1[x] = n;
    }
    for(int i=0;i<10;i++){
        a=0;
        for(int j=0;j<10;j++){
            if(arr1[i]>=arr1[j]){
                a=a+1;
            }
        }
        if(a==10){
            printf("%d is largest number in array",arr1[i]);
        }
    }
    return 0;
}