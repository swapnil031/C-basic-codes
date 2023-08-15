#include<stdio.h>
int main()
{
	int a,b;
	for(int i=1;i<=100;i++)
	{	if(i%2!=0)
		{
			for(int j=i+1;j<=1000;j++)
			{
				for(int k=j+1;k<=1000;k++)
				{
					if((i*i)+(j*j)==(k*k))
					{
						printf("%d %d %d \n",i,j,k);
					}
				}
			}
		}
	}
}
