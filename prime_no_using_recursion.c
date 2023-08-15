#include<stdio.h>
int p(int a,int i,int b)
{
    if(i>0)
    {
        if(a%i==0)
        {
            b+=1;
            return p(a,i-1,b);
        }
        else
            return p(a,i-1,b);
    }
    else
        return b;
}
int main()
{
    int a,b=0,i;
    printf("enter a no");
    scanf("%d",&a);
    i=a;
    int c=p(a,i,b);
    if(c==2)
        printf("it is a prime no");
    else
        printf("it is a composite no");
}
