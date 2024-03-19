//  Write a Program to print the factorial of number N using for loop.

#include<stdio.h>
main(){
    int n,fact=1;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("%d\n",fact);
}