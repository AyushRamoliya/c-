// Q.2 Write a Program to find the largest element from a given 2D array.

#include<stdio.h>
main()
{
    int i,row,col,j,max=0;

    printf("\n enter the row:");
    scanf("%d",&row);
    col=row;

    int a[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter the number:");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           if(a[i][j] > max)
           {
            max = a[i][j];
           } 
        }
    }

    printf("\nBigest value is:%d",max);
    

}