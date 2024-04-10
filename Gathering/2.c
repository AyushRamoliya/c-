// *Question 2:*Write a C program to calculate the area of a rectangle using a user-defined function. Implement
//  a function called calculateArea() that takes the length and width of the rectangle as inputs and returns the 
//  calculated area. Display the area in the main function.


#include<stdio.h>
calculateArea(int high, int width){

    int sum;

    sum=high*width;

    return sum;
}

main()
{

    int high,width;

    printf("enter hight:");
    scanf("%d",&high);

    printf("enter width:");
    scanf("%d",&width);

    int ans=calculateArea(high,width);
    printf("the ans is:%d",ans);

    return 0;
}