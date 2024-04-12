// Q-2 :Using UDF swap between 3 numbers using pointer.


#include<stdio.h>

int swap(int *n1, int *n2,int *n3){
    int *t;
    t=n1;
    n1=n2;
    n2=n3;
    n3=t;

    printf("swap Value: %d\nswap Value: %d\nswap Value: %d",*n1,*n2,*n3);

}


void main(){
    int a,b,c;

    printf("Enter The Value of A :");
    scanf("%d",&a);
    printf("Enter The Value of B :");
    scanf("%d",&b);
    printf("Enter The Value of C :");
    scanf("%d",&c);
    
    swap(&a,&b,&c);
}