#include<stdio.h>
int main()
{
	int a[10],i,j,n,max,max2;
	printf("Enter the no of digits you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];//a[1]=max2;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}max=a[0];
	printf("%d", max);
}
