//Write a program that reads principal amount, rate of interest, and time period from the user and calculates the simple interest.

#include<stdio.h>
void main(){
    float p,r,t,a;

    printf("\n enter principal...");
        scanf("%d",&p);
     printf("\n enter rate...");
        scanf("%d",&r);
   
     printf("\n enter time...");
        scanf("%d",&t);

    a=(p*r*t)/100;
    printf("the simple intrest :%f",a);
}
