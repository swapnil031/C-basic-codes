#include<stdio.h>
int main()
{
	int a[10],b,i,n;
	printf("Enter any number less tham 10:");
	scanf("%d",&n);
	printf("Enter the nos of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}n++;
	printf("Enter the new number:");
	scanf("%d",&b);
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i-1];
	}
	a[0]=b;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}