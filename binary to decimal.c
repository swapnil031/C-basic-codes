#include<stdio.h>
void binary(int a)
{
	int b[10];int i=0;
	while(a>0)
	{
		b[i]=a%2;
		a=a/2;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",b[i]);
	}
}
int main()
{
	int a,b,i;
	printf("enter a decimal number:");
	scanf("%d",&a);
	binary(a);
}
