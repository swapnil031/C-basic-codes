#include<stdio.h>
union student
{
    char name[20];
    int roll;
    int age;
}s;
int main()
{
    printf("enter the name:");
    scanf("%s",s.name);
    printf("the name is %s",s.name);
    printf("enter the roll:");
    scanf("%d",&s.roll);
    printf("the roll is %d",s.roll);
    printf("enter the age:");
    scanf("%d",&s.age);
    printf("the age is %d",s.age);
}