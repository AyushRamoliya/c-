// **Question 2:**
// Define a TSRN function called `multiplyNumbers()` that takes two integers as parameters and calculates their multiplication. Print the result inside the function. Call this function from the `main()` function and display the multiplication of the two numbers.


#include<stdio.h>

void sum(int a, int b){
    printf("multiply=%d",a*b);
}

main(){
    int a,b,c;

    printf("Enter the value of A:");
    scanf("%d",&a);

    printf("Enter the value of B:");
    scanf("%d",&b);

    sum(a,b);

}