#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int (*p)(int,int);
    p=&sum;
    int d=(*p)(4,6);
    printf("%d",d);
    return 0;
}