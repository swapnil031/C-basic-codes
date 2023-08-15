#include<stdio.h>
int main()
{
    int a[20];
    int *p;
    int n;
    p=a;
    printf("enter the no of digits you want to enter: ");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(int i=0;i<n;i++)
        scanf("%d",(p+i));
    for(int i=0;i<n;i++)
        printf("%d",*(p+i));    
    printf("enter the number you want to search: ");
    int m;scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(*(p+i)==m)
        {
            //printf("the number is present");
            break;
        }
    }
    printf("present");

}