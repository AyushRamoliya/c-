//Write a Program to print leap years between two given numbers using a while loop.


#include<stdio.h>
void main(){
    int firstyear, secondyear;

    printf("Enter firstyear :");
    scanf("%d",&firstyear);

     printf("Enter secondyear :");
    scanf("%d",&secondyear);

    while(firstyear <= secondyear){
        if(firstyear%4==0){
            printf("%d\n",firstyear);
        }
        firstyear++;
    }

}