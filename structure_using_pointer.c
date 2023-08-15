#include<stdio.h>
struct student
{
    char name[20];
    int roll;
};
int main()
{
    struct student s1[5],*ptr;
    ptr=&s1;
    int i;
    //there are 5 no of students
    for(i=0;i<5;i++)
    {
       printf("enter the details of %d student:\n",i+1);
       printf("enter the name of %d student:",i+1);
       scanf("%s",&(ptr+i)->name);
       printf("enter the roll of %d student:",i+1);
       scanf("%d",&(ptr+i)->roll);
       printf("\n");
    }
    for(i=0;i<5;i++)
    {
       printf("the details of %d student:\n",i+1);
       printf("the name of %d student:",i+1);
       printf("%s",(ptr+i)->name);
       printf(" the roll of %d student:",i+1);
       printf("%d",(ptr+i)->roll);
       printf("\n");
    }
}