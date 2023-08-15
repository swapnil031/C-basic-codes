#include<stdio.h>
float fact(n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n,i,j;
    float a=0.0;
    printf("enter the range of the series:");
    scanf("%d",&n);
    for(i=2;i<=n+1;i++)
    {
        if(i%2==0)
            a=a+(1/fact(i));
        else if(i%2!=0)    
            a=a-(1/fact(i+1));    

    }
    printf("%f",a);
}