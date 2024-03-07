#include<stdio.h>

void main(){
    int a,b,c;

    printf("enter the value of a=");
    scanf("%d",&a);

    printf("\n enter the value of b=");
    scanf("%d",&b);

    printf("a=%d",a);
    printf("b=%d",b);

    c=a;
    a=b;
    b=c;

    printf(" \n new a=%d", a);
    printf("\n new b=%d",b);
}