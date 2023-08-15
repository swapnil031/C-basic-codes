#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,b;
    int *ptr;
    printf("enter the no of elements you want to enter:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    int a=ptr;
    printf("enter the elements ");
    for(i=0;i<n;i++)
        scanf("%d",ptr++);
    //printf("the elements are : ");
    ptr=a;
    b=*ptr;
   // printf("the largest no is %d",b);
    for(i=1;i<n;i++)
        {
            if(*(ptr+i)>b)
            {
                b=*(ptr+i);
            }
        }
    printf("the largest no is %d",b);
}