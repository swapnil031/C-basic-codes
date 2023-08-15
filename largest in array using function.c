#include<stdio.h>
int max(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
			return max;
		}
	/*	else
		{
			return a[i];
		}*/
	}
}
int main()
{
	int a[10];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the largest is %d",max(a,n));
}