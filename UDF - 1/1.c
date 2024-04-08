// **Part 1: Functions Taking Something and Returning Nothing (TSRN Functions)**

// **Question 1:**
// Write a C program to define a TSRN function named `addNumbers()` that takes two integers as input and calculates their sum. Print the result inside the function. Call this function from the `main()` function and display the sum of two numbers.



#include<stdio.h>

void sum(int a, int b){
    printf("sum=%d",a+b);
}

main(){
    int a,b,c;

    printf("Enter the value of A:");
    scanf("%d",&a);

    printf("Enter the value of B:");
    scanf("%d",&b);

    sum(a,b);

}