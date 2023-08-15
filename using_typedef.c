#include<stdio.h>
typedef struct complex
{
    //char name[20];
    int real;
    float img;
    //int age;
}s;
s add(s s1,s s2)
{
    s c;
    c.real=s1.real+s2.real;
    c.img=s1.img+s2.img;
    return c;
}
int main()
{
    s s1,s2,s3;
    /*printf("enter a name");
    scanf("%s",s1.name);
    printf("enter the roll");
    scanf("%d",&s1.roll);
    printf("the name is %s",s1.name);
    printf("the roll is %d",s1.roll);*/
    printf("for the first no enter the real part: ");
    scanf("%d",&s1.real);
    printf("for the first no enter the imaginary part: ");
    scanf("%f",&s1.img);
    printf("for the second no enter the real part: ");
    scanf("%d",&s2.real);
    printf("for the second no enter the imaginary part: ");
    scanf("%f",&s2.img);
    s3=add(s1,s2);
    printf("the real part is %d\nthe imaginary part is %f",s3.real,s3.img);
}
