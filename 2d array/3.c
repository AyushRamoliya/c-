// Q.3 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.


#include<stdio.h>
main()
{
    int a[5][5];
    int sum=0;

    for(int i=0;i<5;i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("enter value:");
            scanf("%d",&a[i][j]);
        }
        
    }

     for(int i=0;i<5;i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if((i==2 && (j==1 || j==2 || j==3 )) || (i==3 && (j==1 || j==2 || j==3 )) ||(i==1 && (j==1 || j==2 || j==3 ))  )
            {
                printf(" ");
            }
            else
            printf("%d",a[i][j]);
            sum +=a[i][j];

            
        }
        printf("\n");
        
    }

    printf("the sum is:%d",sum);
}
