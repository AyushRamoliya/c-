// Q-2 :Use file file handling method and perform  write

#include<stdio.h>
main(){
    FILE *p;

    char data[100];

    p=fopen("demo1.txt","w");

    if(p==NULL){
        printf("Can't open file...");
    }
    else{
        printf("Open file...\n");
    }
    printf("Enter data...");
    gets(data);
    fputs(data,p);
}