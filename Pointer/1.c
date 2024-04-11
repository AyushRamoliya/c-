// Q.1 Write a Program to find MAXIMUM between 2 numbers in TSRN.

#include<stdio.h>

int max(int *a, int*b){
    if(*a<*b){
        printf("Maximum %d ",*b);
    }
    else{
           printf("Maximum %d ",*b);
    }
}

void main(){
    int a,b;

    printf("Enter The Value A: ");
    scanf("%d",&a);

    printf("Enter The Value B: ");
    scanf("%d",&b);

    max(&a,&b);
    

}