// Write a Program to find the sum of the first and the last digit of a number.

#include<stdio.h>
main(){
    int sum,first,last,number;

    printf("Enter the value of :");
    scanf("%d",&number);

    first = number;
    while(first >=10){
        first/=10;
    }

    last = number %10;

    sum = first + last;

    printf("Sum of first and last digit is : %d \n",sum);
}