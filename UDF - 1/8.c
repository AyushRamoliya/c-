// Create a C program that defines a function printTable() which takes no arguments and prints the multiplication table of 5 from 1 to 10. Call this function from the main() function.


#include<stdio.h>
void printNumbers(){
    int a=5;
   for (int i = 1; i <= 10; i++)
   {
    printf("\n%2d*%2d=%2d",a,i,a*i);
   }
   
}

void main()
{
    printNumbers();
}