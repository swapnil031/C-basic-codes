#include<stdio.h>
int main()
{
    int a[50],i;
    int b[50],j;
    int *p,*q;
    p=a;
    q=b;
    printf("enter 5 nos");
    for(i=0;i<=4;i++)
        scanf("%d",p+i);    
    for(i=0;i<=4;i++)
        printf("%d \n",*(p+i));  
    for(i=4,j=0;i>=0,j<=4;i--,j++)    
        *(q+j)=*(p+i);
    for(j=0;j<=4;j++)    
        printf("%d ",b[j]);
}