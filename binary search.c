#include<stdio.h>
int main()
{
	int i,j,m,n,l,h,mid,o;
	int a[10];
	printf("Enter the number of digits:");
	scanf("%d",&n);
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the no you want to search:");
	scanf("%d",&o);
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(o==a[mid])
		{
			printf("The no is present");
			break;
		}
		else if(o>a[mid])
		{
			l=mid+1;
		}
		else if(o<a[mid])
		{
			h=mid-1;
		}
	}
	if(o>h)
	{
		printf("Absent");
	}
	return 0;
}
