#include<stdio.h>
int main()
{
    int a[50][50];
    int b[50][50];
    int mul[50][50]=0;
    int i,j,k,r1,c1,r2,c2;
    printf("enter the no of rows of 1st array\n");
    scanf("%d",&r1);
    printf("enter the no of coloumns of 1st array\n");
    scanf("%d",&c1);
    printf("enter the no of rows of 2nd array\n");
    scanf("%d",&r2);
    printf("enter the no of rows of 2nd array\n");
    scanf("%d",&c2);
    printf("enter the elements of the 1st array\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of the 2nd array\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the elements of the 1st array\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("the elements of the 2nd array\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {    
            for(k=0;k<c2;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }  
        }
    }
}