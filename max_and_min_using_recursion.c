#include<stdio.h>
#include<limits.h>
int max(int a[],int n)
{	
	//int b; 
    if(a[n]<=a[n-1])
	{
		return a[n-1];
	}
	else
	{
		return max(a,n-1);
	}
}
/*int min(int a[],int n)
{	
//	int c; 
    if(a[n]<a[n-1])
	{
		return a[n];
	}
	else
	{
		return min(a,n-1);
	}
}*/
int main()
{
	int a[10];
	int n;
	printf("enter the range :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	/*int b;
	printf("enter thr search no:");
	scanf("%d",&b);*/
	printf("the max is %d",max(a,n));
	//printf("the min is %d",min(a,n));
}
