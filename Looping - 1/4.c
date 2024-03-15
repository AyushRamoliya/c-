//Write a Program to print odd numbers from N to 1 using a while loop.

#include<stdio.h>

void main(){
    int i;

    printf("Enter the value :");
    scanf("%d",&i);

    while(i>=1){
        if(i%2 !=0){
            printf("%d\n",i);
        }
        i--;
    }
}