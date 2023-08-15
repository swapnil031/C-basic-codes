#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the range");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i ;j++)
		{
			if(i<=n)
				printf("%c ",86+j);
		}
		//printf("\n");
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i;j++)
		{	if(i<n)
				printf("%c ",86+j);
		}
	}
	return 0;
}
