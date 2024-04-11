// Q.3 Write a Program to swap two variables using Pointers.

#include<stdio.h>

swap(int *n1, int *n2){
    int *t;
    t=*n1;
    *n1=*n2;
    *n2=t;

    printf("swap Value: %d\nswap Value : %d",*n1,*n2);

}


main(){
    int a,b;

    printf("Enter The Value of A :");
    scanf("%d",&a);
    printf("Enter The Value of B :");
    scanf("%d",&b);
    
    swap(&a,&b);
}
