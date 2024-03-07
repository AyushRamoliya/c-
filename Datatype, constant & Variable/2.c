//.Write a C program that reads a floating-point number representing the radius of a circle using scanf() and calculates its circumference.

#include<stdio.h>
void main(){
     

     float c, r,pi=3.14159;
    

     printf("Enter the radious:");
     scanf("%f",&r);

    c=2*pi*r;

    printf("the radious of circle =%f",c);


}