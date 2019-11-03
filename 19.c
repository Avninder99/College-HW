#include<stdio.h>
int main(){
    // ALL 3 PATTERNS ARE IN THIS FILE

/**********************************************************
**********************************************************/ 
    printf("\n");
    printf("FIRST\n");
    printf("\n");

    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j==1){
                printf("1 ");
            }
            else if(j==2 && (i==2 || i==3 || i==4)){
                printf("2 ");
            }
            else if(j==3 && (i==3 || i==4)){
                printf("3 ");
            }
            else if(j==4 && i==4){
                printf("4 ");
            }
        }
        printf("\n");
    }
/**********************************************************
**********************************************************/
    printf("\n");
    printf("SECOND\n");
    printf("\n");

    int a,b;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            if(a==1 && b==1){
                printf("1 ");
            }
            else if(a==2){
                if(b==1){
                    printf("2 ");
                }
                else if(b==2){
                    printf("3 ");
                }
            }
            else if(a==3){
                if(b==1){
                    printf("4 ");
                }
                else if(b==2){
                    printf("5 ");
                }
                else if(b==3){
                    printf("6 ");
                }
            }
            else if(a==4){
                if(b==1){
                    printf("7 ");
                }
                else if(b==2){
                    printf("8 ");
                }
                else if(b==3){
                    printf("9 ");
                }
                else if(b==4){
                    printf("10 ");
                }
            }
        }
        printf("\n");
    }

/************************************************************
************************************************************/
    printf("\n");
    printf("THIRD\n");
    printf("\n");

    int x,y;
    for(x=1;x<=4;x++){
        for(y=1;y<=7;y++){
            if(x==1){
                if(y==4){
                    printf("1 ");
                }
                else{
                    printf("  ");
                }
            }
            else if(x==2){
                if(y==3 || y==4 || y==5){
                    if(y==3 || y==5){
                        printf("1 ");
                    }
                    else if(y==4){
                        printf("2 ");
                    }
                }
                else if(y==1 || y==2 || y==6 || y==7){
                    printf("  ");
                }
            }
            else if(x==3){
                if(y==4){
                    printf("3 ");
                }
                else if(y==3 || y==5){
                    printf("2 ");
                }
                else if(y==2 || y==6){
                    printf("1 ");
                }
                else if(y==1 || y==7){
                    printf("  ");
                }
            }
            else if(x==4){
                if(y==4){
                    printf("4 ");
                }
                else if(y==3 || y==5){
                    printf("3 ");
                }
                else if(y==2 || y==6){
                    printf("2 ");
                }
                else if(y==1 || y==7){
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}