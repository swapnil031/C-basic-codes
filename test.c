#include<stdio.h>
int fibo(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	int a,b,c,n;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	/*a=0;
	b=1;*/
	for(int i=0;i<=n;i++)
		printf("%d ",fibo(i));
	return 0;
}
