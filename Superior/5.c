// 5. Write a C program to reverse an array.


#include<stdio.h>
main()
{
    int i,size;

    printf("enter size of array:");
    scanf("%d",&size);

    int a[size];


    for ( i = 0; i < size; i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < size; i++)
    {
        printf("\n%d",a[i]);
    }

    printf("\nreverse array:");
    for ( i = size-1; i >= 0; i--)
    {
        printf("\n%d",a[i]);
    }
    
  
}

