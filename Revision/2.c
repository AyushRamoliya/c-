// 2. Find factorial of anumber.



#include<stdio.h>
main(){
    int number, i, fac=1;

    printf("Enter the valiue of number :");
    scanf("%d",&number);

    if(number<0){
        printf("Enter the valid number...");
    }

    else{
        for(int i=1; i<= number; ++i){

            fac*=i;
        }

        printf("Factorial of %d=%d",number,fac);
    }
}