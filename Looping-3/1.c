// Write a Program to print the sum of all numbers from 1 to N using for loop.


#include<stdio.h>

main(){
    int n,sum;

    printf("Enter The Value of n :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        
        sum+=i;
    }
    printf("%d",sum);
}