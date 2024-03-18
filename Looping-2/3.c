//Write a Program to print even numbers from 1 to N using a do-while loop.

#include<stdio.h>
main(){
    int i=1,user;

    printf("Enter The Value :");
    scanf("%d",&user);

    do{
        if(i % 2 == 0){
            printf("%d\n",i);
        }
        i++;
    }
    while (i<=user);
}
