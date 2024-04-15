// Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.



#include<stdio.h>
main()
{
    int size;

    printf("\n enter the size:");
    scanf("%d",&size);

    int a[size];
    int *p;
    p=&a;


    for(int i=0; i<size; i++)
    {
        printf("\n enter number:");
        scanf("%d",&p[i]);
    }

    for(int i=size-1; i>=0; i--)
    {
        printf("\n%d",*(p+i));

    }




}
   