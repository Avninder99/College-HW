#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks of Student out of 100 :- ");
    scanf("%d",&marks);
    if(marks>=95){
        printf("O grade");
    }
    else if(marks<95 && marks>=90){
        printf("A Grade");
    }
    else if(marks<90 && marks>=80){
        printf("B Grade");
    }
    else if(marks<80 && marks>=70){
        printf("C Grade");
    }
    else if(marks<70 && marks>=60){
        printf("D Grade");
    }
    else if(marks<60 && marks>=50){
        printf("E Grade");
    }
    else if(marks<50 && marks>=40){
        printf("E- Grade");
    }
    else{
        printf("F Grade");
    }
    return 0;
}