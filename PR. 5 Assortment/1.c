// Q.1 Write a Program to find all the negative elements from a given 1D array.


#include<stdio.h>
main(){
    int row;

    printf("Enter the size of array :");
    scanf("%d",&row);

    int arr [row];

    for(int i=0; i<row; i++){
        printf("Enter the value of array : ");
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<row; i++){
        if(arr[i]<0){
            printf("Negative elements from an Array: %d",arr[i]);
        }
        printf("\n");
    }
}