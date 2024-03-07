// Write a program that reads an integer representing the number of hours worked by an employee using scanf() and calculates their weekly pay based on a fixed hourly rate. 

#include<stdio.h>
 void main(){
    int hour;

    printf("Enter your hour= ");

    scanf("%d",&hour);
    printf("\n weekly pay:%d",hour*15);
 }