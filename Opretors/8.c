//Write a program that evaluates the expression:

#include<stdio.h>

void main(){
    int a,b,c,d,e;

    printf("Enter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);
    printf("Enter the value of C :");
    scanf("%d",&c);
    printf("Enter the value of D :");
    scanf("%d",&d);

    e=(a+b)*(c-d);

    printf("Arithmetic Expression of number :%d",e);
}