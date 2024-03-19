// Write a Program to print the multiplication table of the number N using any type of loop


#include<stdio.h>
main()
{
	int number,digit;

    printf("Enter the valu of Digit:");
    scanf("%d",&digit);

	for(number=1; number<=10;number++)	
	{
		printf("%d *%d =%d \n",digit,number,number*digit);
	}
}