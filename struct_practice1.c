#include<stdio.h>
struct student
{
    char name[20];
    int roll;
}s1;
struct student
{
    int roll;
    char name[20];
}s2;
int main()
{
    //struct student s1;
    printf("enter the name:");
    scanf("%s",s1.name);
    printf("enter the roll:");
    scanf("%d",&s1.roll);
    printf("the name is %s\nthe roll is %d",s1.name,s1.roll);
    //struct student s2;
    //s2=s1;
    /*printf("enter the name:");
    scanf("%s",s2.name);
    printf("enter the roll:");
    scanf("%d",&s2.roll);*/
    printf("the name is %s\nthe roll is %d",s2.name,s2.roll);
}

