//Write a program that takes two integers as input from the user using scanf() and calculates their product. give example input output

#include<stdio.h>

void main(){

    int a,b,c;

    printf("Enter the first value=");
    scanf("%d",&a);

    printf("Enter the second value =");
    scanf("%d",&b);

    c=a*b;

    printf("total of integer = %d",c);

}