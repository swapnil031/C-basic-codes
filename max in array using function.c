#include<stdio.h>
int max(int a[],int n,int largest)
{
	
	if(n>=0)
	{
		if(a[n]>largest)
			largest=a[n];
		return max(a,n-1,largest);
	}
	else
		return largest;
}
int main()
{
	int a[10];
	int n,i,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int largest=a[0];
	printf("the largest is %d",max(a,n,largest));
}

