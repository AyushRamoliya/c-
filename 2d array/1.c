// Q.1 Write a Program to find the average of a given 2D array.

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
            sum +=a[i][j];
            
        }
        printf("\n");
        
    }
    printf("the sum of array: %d",sum);
    avr=sum/9;

    printf("\n the avr is:%f",avr);

}
