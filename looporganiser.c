#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
			printf(" ");
		for(j=1;j<=i;j++)	
		{
			if(i==2 && j==2)
			
				printf(" %d",j);
			
			else if(i==3 && j==3)
			
				printf(" %d",j);
			
			else
				printf("%d",j);
		}
		for(l=i-1;l>=1;l--)
			printf("%d",l);
		printf("\n")	;
	}
}
