#include<stdio.h>
int main() 
{
int m1,n1,m2,n2,i,j;
printf("Enter the rows and coloumns of the first array:");
scanf("%d%d",&m1,&n1);
int a[m1][n1];
printf("Enter the rows and coloumns of the second array:");
scanf("%d%d",&m2,&n2);
int b[m2][n2];
printf("Enter the elements of 1st array:");
for(i=0;i<m1;i++) 
  {
    for(j=0;j<n1;j++)
      {
        scanf("%d",&a[i][j]);
      }
  }
printf("Enter th elements of 2nd array:");
for(i=0;i<m2;i++) 
  {
    for(j=0;j<n2;j++)
      {
        scanf("%d",&b[i][j]);
      }
  }
 printf("The array after addition is:");
  for(i=0;i<m1;i++) 
  {
    for(j=0;j<n1;j++)
      {
        a[i][j]=a[i][j]+b[i][j];
        printf("%d",a[i][j]);
      }
    printf("\n");
  }
  /*for(i=0;i<m1;i++) 
  {
    for(j=0;j<n1;j++)
      {
        printf("%d",a[i][j]);
      }
    printf("\n");
  }*/
 return 0;
}