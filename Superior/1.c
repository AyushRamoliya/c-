// 1. Write a C program to find the sum of elements in an array.

#include<stdio.h>
main(){
    int a;

    printf("Enter the size of array :");
    scanf("%d",&a);

    int arr[a],sum=0;

    for(int i=0; i<a; i++){
        printf("Enete the value of :");
        scanf("%d",&arr[i]);

        sum=sum + arr[i];
    }

    printf("%d",sum);

}