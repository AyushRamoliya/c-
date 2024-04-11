// Q.2 Write a Program to find MINIMUM between 2 numbers in TSRN.

#include<stdio.h>

int max(int *a, int*b){
    if(*a<*b){
        printf("Minimum %d ",*a);
    }
    else{
           printf("Minimum %d ",*b);
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