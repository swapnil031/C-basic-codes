#include<stdio.h>
int main()
{
	int i,j,k,n,o=0;
	int a[10];
	printf("Enter the no of digits:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to search:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			o=1;
			break;
		}
	}
	if(o==1)
	{
		printf("The no %d is present at position %d",k,i+1);
	}
	else
	{
		printf("The no is absent");
	}
	return 0;
}
