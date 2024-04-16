// Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N
//  number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name


#include<stdio.h>

struct student
{
    int emp_id;
    char emp_name[100];
    int emp_age;
    char emp_role[100];
    char emp_city[100];
    int emp_year;
    char emp_company_name[100];
}s[100];

main()
{
    int stud;

    printf("enter student number:");
    scanf("%d",&stud);

    for(int i=0;i<stud;i++)
    {
        printf("enter id:");
        scanf("%d",&s[i].emp_id);

        printf("enter name:");
        scanf("%s",&s[i].emp_name);

        printf("enter age:");
        scanf("%d",&s[i].emp_age);

        printf("enter role:");
        scanf("%s",&s[i].emp_role);

        printf("enter city:");
        scanf("%s",&s[i].emp_city);

        printf("enter experience:");
        scanf("%d",&s[i].emp_year);

        printf("enter company name:");
        scanf("%s",&s[i].emp_company_name);
    }



    for(int i=0;i<stud;i++)
    {
        printf("\nid:%d",s[i].emp_id);

        printf("\nname:%s",s[i].emp_name);

        printf("\nage:%d",s[i].emp_age);

        printf("\nrole:%s",s[i].emp_role);

        printf("\ncity:%s",s[i].emp_city);

        printf("\nexperience:%d",s[i].emp_year);

        printf("\ncompany name:%s",s[i].emp_company_name);
    }
}