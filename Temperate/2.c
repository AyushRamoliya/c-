// Write a Program to count the total number of digits in a number.

#include <stdio.h>

main() {
    int num, count = 0;

    printf("Enter The Value : ");
    scanf("%d", &num);

    int t = num;
    while (t != 0) {
        t /= 10;
        count++;
    }

    printf("The total number of digits is : %d\n",count);

}