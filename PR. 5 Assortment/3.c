// Q.3 Write a Program to find the transpose matrix of a given 2D array.


#include<stdio.h>
main()
{
   int i,row,col,j;

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
    printf("\n transpose metrix is....\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }

    

    
 
}