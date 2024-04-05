// Question 6:
// Write a C program to take two strings as input from the user and compare if they are equal. If they are equal, print "Strings are equal," else print "No, they are not equal."


#include <stdio.h>
#include<string.h>

main() {
    char str1[100], str2[100]; 
	
	printf("enter first:");
	gets(str1);
	printf("enter secound:");
	gets(str2);
	
	printf("%d",strcmp(str1,str2));
	
	int a;
	a=strcmp(str1,str2);
	if(a==0)
	
		printf("string equal");
	
	else
	printf("not equal...");
    
}