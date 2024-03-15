// Write a Program to print 1 to N using a while loop.

#include<stdio.h>

main(){
    
    int a,i=1;

    printf("Enter The Value :");
    scanf("%d",&a);

    while(i<=a){
        printf("%d\n",i);

        i++;
    }

}