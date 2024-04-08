// **Question 3:**
// Write a TSRN function named `divideNumbers()` that takes two integers as input and calculates their division. Print the result inside the function. Handle the case when the divisor is zero. Call this function from the `main()` function and display the quotient.

#include<stdio.h>

void sum(float a, float b){
    printf("divide=%f",a/b);
}

main(){
    int a,b,c;

    printf("Enter the value of A:");
    scanf("%d",&a);

    printf("Enter the value of B:");
    scanf("%d",&b);

    sum(a,b);

}