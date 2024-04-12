// Q-1 :Using UDF find  cube of a number using pointer.


#include<stdio.h>

int cube(int *a){

    int cube;

    cube=*a;

    printf("cube :%d",cube*cube*cube);
}
main(){
    int a;

    printf("Enter the Vale of A:");
    scanf("%d",&a);

    cube(&a);
}
