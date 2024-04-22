// Reverse a given number using loops:
// Enter an integer: 12345
// Reversed Number: 54321

#include<stdio.h>

main(){
    int a;

    printf("Enter the size=");
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        printf("Number=");
        scanf("%d",&i);
    }
    
    for(int i=a; i>=1; i--){
        printf("Reverse number=%d\n",i);
    }
}