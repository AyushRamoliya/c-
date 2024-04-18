// 4. Write a C program to count the number of even and odd elements in an array.

#include<stdio.h>
main()
{
    int i,size,evencnt=0,oddcnt=0,even,odd;

    printf("enter size of array:");
    scanf("%d",&size);

    int a[size];


    for ( i = 0; i < size; i++)
    {
        printf("enter value:");
        scanf("%d",&a[i]);
    }

    printf("\n the even number is:");

    for ( i = 0; i < size; i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d",a[i]);
            evencnt++;
        }
    }

    printf("\n the odd number is:");
    
    for ( i = 0; i < size; i++)
    {
        if(a[i]%2)
        {
            printf("\n%d",a[i]);
            oddcnt++;
        }
    }


    printf("\n");

    printf("\nthe even number is=%d",evencnt);
    printf("\nthe odd number is=%d",oddcnt);

}