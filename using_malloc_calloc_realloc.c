#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i;
    int m;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    //ptr=(int*)malloc(n*sizeof(int));
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
    printf("enter the new size:");
    scanf("%d",&m);
    ptr=(int*)realloc(ptr,m*sizeof(int));
    for(i=n;i<m;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<m;i++)
    {
        printf("%d",*(ptr+i));
    }
}