//.Design a program that reads two integers using scanf() and calculates their average. give example input output

#include<stdio.h>

void main(){
    int a,b,aver;

    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    aver=(a+b)/2;

    printf("average of two numbers : %d",aver);
}