#include<stdio.h>
int main()
{
	int n=4;
	int i,j,k,a,b,c,l;
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=n)
		{
			for(k=1;k<=n-i;k++)
				printf(" ");
			for(j=i;j>=1;j--)	
				printf("%d",j);
			for(l=2;l<=i;l++)	
				printf("%d",l);
		}
		if(i>n && i<=2*n-1)
		{
			for(a=1;a<=i-n;a++)
				printf(" ");
			for(b=2*n-i;b>=1;b--)	
			 	printf("%d",b);
			for(c=2;c<=2*n-i;c++) 	
				printf("%d",c);
		}
		printf("\n");
	}
}
