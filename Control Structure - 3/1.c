// Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>

void main(){
    int a,b,c;

    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Enter the value of c:");
    scanf("%d",&c);

    (a<b) ? (a<c) ?
    printf("A is minimum"):printf("C is minimum"):
    (b<c)?printf("B is minimum"):printf("C is minimum");

}