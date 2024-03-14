// Write a Program to check whether a number is even or odd using the ternary operator.

#include<stdio.h>
void main(){
    int number;

    printf("Enter the Number :");
    scanf("%d",&number);

    (number/2) ? printf("This is Even number..."): printf("This is Odd number...");
}