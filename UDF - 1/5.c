// *Question 5:*
// Create a TSRN function called calculateSquare() that takes an integer as input and calculates its square. Print the result inside the function. Call this function from the main() function and display the square of a number.


#include<stdio.h>
calculateSquare(int a)
{
    
   
    printf("Square=%d",a*a);
}


main()
{
    int x;

    printf("enter a:");
    scanf("%d",&x);
    

    calculateSquare(x);

}