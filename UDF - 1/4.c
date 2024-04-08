// *Question 4:*
// Define a TSRN function calculateCube() that takes an integer as input and calculates its cube. Print the result inside the function. Call this function from the main() function and display the cube of a number.


#include<stdio.h>
calculateCube(int a)
{
    
    int c;
    c=a*a*a;
    printf("qube=%d",c);
}


main()
{
    int x;

    printf("enter a:");
    scanf("%d",&x);
    

    calculateCube(x);

}