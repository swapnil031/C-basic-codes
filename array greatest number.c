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
	max=max2=a[0];//a[1]=max2;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max2=max;
			max=a[i];
		}
		else if(max2<a[i] && a[i]!=max)
		{
			max2=a[i];
		}
	}
	printf("%d",max2);
	return 0;
}
