#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,z;
    float r1,r2;
    printf("Quadratic equation is in the form of [ ax^2 + bx + c ]\n");
    printf("Enter value of a :- ");
    scanf("%d",&a);
    printf("Enter value of b :- ");
    scanf("%d",&b);
    printf("Enter value of c :- ");
    scanf("%d",&c);
    d = (b * b) - 4*a*c;
    printf("%d",d);
    z = pow(d,0.5);
    if(a==0){
        printf("equation is not quadratic equation");
    }
    else if(d>=0){
        r1 = (-b+z)/2*a;
        r2 = (-b-z)/2*a;
        printf("Value of roots are %f and %f",r1,r2);
    }
    else{
        printf("roots are imaginary");
    }
    return 0;
}