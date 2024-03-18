// Write a Program to print the Fibonacci series up to N numbers using a for loop.


#include<stdio.h>
main(){
    int f=0, s=1, ans, a;

    printf("Enter The value A :");
    scanf("%d",&a);

    for(int i=0; i<=a; i++){
        printf("%d\n",f);

        ans=f+s;
        f=s;
        s=ans;
    }
}