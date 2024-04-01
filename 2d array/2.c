// Q.2 Write a Program to find the sum of diagonal elements from a given 2D array.

#include<stdio.h>
main()
{
    int a[3][3];
    float avr;
    int sum=0;

    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value:");
            scanf("%d",&a[i][j]);
        }
        
    }

     for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);

            if(i==j)
            {
                sum +=a[i][j];
            }
            
        }
        printf("\n");
        
    }
    printf("the sum of array:%d",sum);

}
