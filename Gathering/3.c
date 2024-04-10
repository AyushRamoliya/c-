// *Question 3:*Write a C program to find the factorial of a given positive integer using a user-defined function.
//  The program should prompt the user to enter a positive integer and then calculate its factorial using a function
//   called calculateFactorial(). Display the calculated factorial in the main function.



#include<stdio.h>
int calculateFactorial(int a){

    int fact=1;
    for(int i=a;i>=1;i--)
    {
        printf("\n%d",i);
        fact *=i;
    }   

    return fact;
}

int main()
{
    int a;

    printf("enter the number:");
    scanf("%d",&a);

    int ans=calculateFactorial(a);

    printf("\n the ans is:%d",ans);

    return 0;
}