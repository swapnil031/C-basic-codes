#include<stdio.h>
typedef struct student
{
    char name[20];
    int age;
}s;
int main()
{
    int i;
    s c[3];
    for(i=0;i<3;i++)
    {
        printf("enter the name of student %d",i+1);
        scanf("%s",c[i].name);
        printf("enter the age of student %d",i+1);
        scanf("%d",&c[i].age);
    }
    for(i=0;i<3;i++)
    {
        printf("the name of the student %d is %s\n",i+1,c[i].name);
        printf("the age of the student %d is %d\n",i+1,c[i].age);
    }
}